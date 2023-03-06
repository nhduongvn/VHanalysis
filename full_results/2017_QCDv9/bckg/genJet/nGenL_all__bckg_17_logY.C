#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenL_all__bckg_17_logY()
{
//=========Macro generated from canvas: nGenL_all__bckg_17/nGenL_all__bckg_17
//=========  (Mon Mar  6 10:58:23 2023) by ROOT version 6.26/06
   TCanvas *nGenL_all__bckg_17 = new TCanvas("nGenL_all__bckg_17", "nGenL_all__bckg_17",0,0,600,600);
   nGenL_all__bckg_17->SetHighLightColor(2);
   nGenL_all__bckg_17->Range(-3.775293,-0.4754679,17.0745,13.6025);
   nGenL_all__bckg_17->SetFillColor(0);
   nGenL_all__bckg_17->SetFillStyle(4000);
   nGenL_all__bckg_17->SetBorderMode(0);
   nGenL_all__bckg_17->SetBorderSize(2);
   nGenL_all__bckg_17->SetLogy();
   nGenL_all__bckg_17->SetLeftMargin(0.15709);
   nGenL_all__bckg_17->SetRightMargin(0.1234783);
   nGenL_all__bckg_17->SetBottomMargin(0.12);
   nGenL_all__bckg_17->SetFrameFillStyle(1000);
   nGenL_all__bckg_17->SetFrameBorderMode(0);
   nGenL_all__bckg_17->SetFrameFillStyle(1000);
   nGenL_all__bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(96.07673);
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",15,-0.5,14.5);
   st_stack_10->SetMinimum(16.36395);
   st_stack_10->SetMaximum(1.56568e+12);
   st_stack_10->SetDirectory(0);
   st_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_10->SetLineColor(ci);
   st_stack_10->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_10->GetXaxis()->SetLabelFont(42);
   st_stack_10->GetXaxis()->SetTitleOffset(1);
   st_stack_10->GetXaxis()->SetTitleFont(42);
   st_stack_10->GetYaxis()->SetTitle("Events/1.0");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetTitleSize(0.037);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetTitleOffset(1);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *nGenL_all_stack_1 = new TH1D("nGenL_all_stack_1","",15,-0.5,14.5);
   nGenL_all_stack_1->SetBinContent(1,4.905586e+11);
   nGenL_all_stack_1->SetBinContent(2,5.310069e+11);
   nGenL_all_stack_1->SetBinContent(3,2.610072e+11);
   nGenL_all_stack_1->SetBinContent(4,9.174767e+10);
   nGenL_all_stack_1->SetBinContent(5,2.652005e+10);
   nGenL_all_stack_1->SetBinContent(6,6.962474e+09);
   nGenL_all_stack_1->SetBinContent(7,1.758104e+09);
   nGenL_all_stack_1->SetBinContent(8,4.345082e+08);
   nGenL_all_stack_1->SetBinContent(9,1.052596e+08);
   nGenL_all_stack_1->SetBinContent(10,2.608748e+07);
   nGenL_all_stack_1->SetBinContent(11,6173999);
   nGenL_all_stack_1->SetBinContent(12,1261440);
   nGenL_all_stack_1->SetBinContent(13,363320.7);
   nGenL_all_stack_1->SetBinContent(14,95944.12);
   nGenL_all_stack_1->SetBinContent(15,25637.05);
   nGenL_all_stack_1->SetBinContent(16,58.32739);
   nGenL_all_stack_1->SetBinError(1,9.088341e+07);
   nGenL_all_stack_1->SetBinError(2,9.367884e+07);
   nGenL_all_stack_1->SetBinError(3,6.519008e+07);
   nGenL_all_stack_1->SetBinError(4,3.837833e+07);
   nGenL_all_stack_1->SetBinError(5,2.047458e+07);
   nGenL_all_stack_1->SetBinError(6,1.042555e+07);
   nGenL_all_stack_1->SetBinError(7,5215450);
   nGenL_all_stack_1->SetBinError(8,2587431);
   nGenL_all_stack_1->SetBinError(9,1271858);
   nGenL_all_stack_1->SetBinError(10,631117.3);
   nGenL_all_stack_1->SetBinError(11,310019.8);
   nGenL_all_stack_1->SetBinError(12,138140.3);
   nGenL_all_stack_1->SetBinError(13,74426.13);
   nGenL_all_stack_1->SetBinError(14,37805.18);
   nGenL_all_stack_1->SetBinError(15,22082.27);
   nGenL_all_stack_1->SetBinError(16,36.17957);
   nGenL_all_stack_1->SetEntries(2.975996e+08);

   ci = TColor::GetColor("#ff6600");
   nGenL_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_all_stack_1->SetLineColor(ci);
   nGenL_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenL_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenL_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenL_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenL_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenL_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_all_stack_1,"");
   
   TH1D *nGenL_all_stack_2 = new TH1D("nGenL_all_stack_2","",15,-0.5,14.5);
   nGenL_all_stack_2->SetBinContent(1,229447.8);
   nGenL_all_stack_2->SetBinContent(2,2602028);
   nGenL_all_stack_2->SetBinContent(3,9007444);
   nGenL_all_stack_2->SetBinContent(4,1.120545e+07);
   nGenL_all_stack_2->SetBinContent(5,7663740);
   nGenL_all_stack_2->SetBinContent(6,3605809);
   nGenL_all_stack_2->SetBinContent(7,1348004);
   nGenL_all_stack_2->SetBinContent(8,434597.6);
   nGenL_all_stack_2->SetBinContent(9,126967.4);
   nGenL_all_stack_2->SetBinContent(10,34721.81);
   nGenL_all_stack_2->SetBinContent(11,8964.867);
   nGenL_all_stack_2->SetBinContent(12,2236.956);
   nGenL_all_stack_2->SetBinContent(13,531.7965);
   nGenL_all_stack_2->SetBinContent(14,132.6082);
   nGenL_all_stack_2->SetBinContent(15,31.83442);
   nGenL_all_stack_2->SetBinContent(16,9.531803);
   nGenL_all_stack_2->SetBinError(1,113.0001);
   nGenL_all_stack_2->SetBinError(2,388.2779);
   nGenL_all_stack_2->SetBinError(3,740.4725);
   nGenL_all_stack_2->SetBinError(4,855.2335);
   nGenL_all_stack_2->SetBinError(5,726.0004);
   nGenL_all_stack_2->SetBinError(6,504.9101);
   nGenL_all_stack_2->SetBinError(7,311.0933);
   nGenL_all_stack_2->SetBinError(8,177.4752);
   nGenL_all_stack_2->SetBinError(9,96.2121);
   nGenL_all_stack_2->SetBinError(10,50.43775);
   nGenL_all_stack_2->SetBinError(11,25.66201);
   nGenL_all_stack_2->SetBinError(12,12.84172);
   nGenL_all_stack_2->SetBinError(13,6.254699);
   nGenL_all_stack_2->SetBinError(14,3.141741);
   nGenL_all_stack_2->SetBinError(15,1.529812);
   nGenL_all_stack_2->SetBinError(16,0.835711);
   nGenL_all_stack_2->SetEntries(6.301685e+08);

   ci = TColor::GetColor("#990099");
   nGenL_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_all_stack_2->SetLineColor(ci);
   nGenL_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenL_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenL_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenL_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenL_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenL_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenL_all_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("nGenL_all_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenL_all__bckg_17->Modified();
   nGenL_all__bckg_17->cd();
   nGenL_all__bckg_17->SetSelected(nGenL_all__bckg_17);
}
