#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenGlu_all__bckg_18()
{
//=========Macro generated from canvas: nGenGlu_all__bckg_18/nGenGlu_all__bckg_18
//=========  (Mon Mar  6 10:53:08 2023) by ROOT version 6.26/06
   TCanvas *nGenGlu_all__bckg_18 = new TCanvas("nGenGlu_all__bckg_18", "nGenGlu_all__bckg_18",0,0,600,600);
   nGenGlu_all__bckg_18->SetHighLightColor(2);
   nGenGlu_all__bckg_18->Range(-3.775293,-8.578755e+10,17.0745,6.291087e+11);
   nGenGlu_all__bckg_18->SetFillColor(0);
   nGenGlu_all__bckg_18->SetFillStyle(4000);
   nGenGlu_all__bckg_18->SetBorderMode(0);
   nGenGlu_all__bckg_18->SetBorderSize(2);
   nGenGlu_all__bckg_18->SetLeftMargin(0.15709);
   nGenGlu_all__bckg_18->SetRightMargin(0.1234783);
   nGenGlu_all__bckg_18->SetBottomMargin(0.12);
   nGenGlu_all__bckg_18->SetFrameFillStyle(1000);
   nGenGlu_all__bckg_18->SetFrameBorderMode(0);
   nGenGlu_all__bckg_18->SetFrameFillStyle(1000);
   nGenGlu_all__bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_30 = new TH1F("st_stack_30","",15,-0.5,14.5);
   st_stack_30->SetMinimum(0);
   st_stack_30->SetMaximum(5.576191e+11);
   st_stack_30->SetDirectory(0);
   st_stack_30->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_30->SetLineColor(ci);
   st_stack_30->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_30->GetXaxis()->SetLabelFont(42);
   st_stack_30->GetXaxis()->SetTitleOffset(1);
   st_stack_30->GetXaxis()->SetTitleFont(42);
   st_stack_30->GetYaxis()->SetTitle("Events/1.0");
   st_stack_30->GetYaxis()->SetLabelFont(42);
   st_stack_30->GetYaxis()->SetTitleSize(0.037);
   st_stack_30->GetYaxis()->SetTitleFont(42);
   st_stack_30->GetZaxis()->SetLabelFont(42);
   st_stack_30->GetZaxis()->SetTitleOffset(1);
   st_stack_30->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_30);
   
   
   TH1D *nGenGlu_all_stack_1 = new TH1D("nGenGlu_all_stack_1","",15,-0.5,14.5);
   nGenGlu_all_stack_1->SetBinContent(1,7.169181e+10);
   nGenGlu_all_stack_1->SetBinContent(2,2.884522e+11);
   nGenGlu_all_stack_1->SetBinContent(3,5.094734e+11);
   nGenGlu_all_stack_1->SetBinContent(4,5.310571e+11);
   nGenGlu_all_stack_1->SetBinContent(5,3.586967e+11);
   nGenGlu_all_stack_1->SetBinContent(6,1.74879e+11);
   nGenGlu_all_stack_1->SetBinContent(7,7.143542e+10);
   nGenGlu_all_stack_1->SetBinContent(8,2.620585e+10);
   nGenGlu_all_stack_1->SetBinContent(9,9.01161e+09);
   nGenGlu_all_stack_1->SetBinContent(10,2.937299e+09);
   nGenGlu_all_stack_1->SetBinContent(11,9.173739e+08);
   nGenGlu_all_stack_1->SetBinContent(12,2.768295e+08);
   nGenGlu_all_stack_1->SetBinContent(13,8.299053e+07);
   nGenGlu_all_stack_1->SetBinContent(14,2.348613e+07);
   nGenGlu_all_stack_1->SetBinContent(15,6421013);
   nGenGlu_all_stack_1->SetBinContent(16,2311180);
   nGenGlu_all_stack_1->SetBinError(1,4.593158e+07);
   nGenGlu_all_stack_1->SetBinError(2,9.233756e+07);
   nGenGlu_all_stack_1->SetBinError(3,1.223804e+08);
   nGenGlu_all_stack_1->SetBinError(4,1.242605e+08);
   nGenGlu_all_stack_1->SetBinError(5,1.009975e+08);
   nGenGlu_all_stack_1->SetBinError(6,6.939109e+07);
   nGenGlu_all_stack_1->SetBinError(7,4.341379e+07);
   nGenGlu_all_stack_1->SetBinError(8,2.555257e+07);
   nGenGlu_all_stack_1->SetBinError(9,1.452172e+07);
   nGenGlu_all_stack_1->SetBinError(10,8378781);
   nGenGlu_all_stack_1->SetBinError(11,4546623);
   nGenGlu_all_stack_1->SetBinError(12,2333531);
   nGenGlu_all_stack_1->SetBinError(13,1310386);
   nGenGlu_all_stack_1->SetBinError(14,689310.9);
   nGenGlu_all_stack_1->SetBinError(15,319687.8);
   nGenGlu_all_stack_1->SetBinError(16,189030.2);
   nGenGlu_all_stack_1->SetEntries(3.035979e+08);

   ci = TColor::GetColor("#ff6600");
   nGenGlu_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenGlu_all_stack_1->SetLineColor(ci);
   nGenGlu_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenGlu_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenGlu_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenGlu_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenGlu_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenGlu_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenGlu_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenGlu_all_stack_1,"");
   
   TH1D *nGenGlu_all_stack_2 = new TH1D("nGenGlu_all_stack_2","",15,-0.5,14.5);
   nGenGlu_all_stack_2->SetBinContent(1,8901366);
   nGenGlu_all_stack_2->SetBinContent(2,1.471605e+07);
   nGenGlu_all_stack_2->SetBinContent(3,1.322837e+07);
   nGenGlu_all_stack_2->SetBinContent(4,8683025);
   nGenGlu_all_stack_2->SetBinContent(5,4641413);
   nGenGlu_all_stack_2->SetBinContent(6,2144985);
   nGenGlu_all_stack_2->SetBinContent(7,887934.1);
   nGenGlu_all_stack_2->SetBinContent(8,337445.3);
   nGenGlu_all_stack_2->SetBinContent(9,119855.8);
   nGenGlu_all_stack_2->SetBinContent(10,40003.37);
   nGenGlu_all_stack_2->SetBinContent(11,12811.94);
   nGenGlu_all_stack_2->SetBinContent(12,3907.192);
   nGenGlu_all_stack_2->SetBinContent(13,1144.748);
   nGenGlu_all_stack_2->SetBinContent(14,320.069);
   nGenGlu_all_stack_2->SetBinContent(15,91.01787);
   nGenGlu_all_stack_2->SetBinContent(16,30.12668);
   nGenGlu_all_stack_2->SetBinError(1,824.1931);
   nGenGlu_all_stack_2->SetBinError(2,1064.468);
   nGenGlu_all_stack_2->SetBinError(3,1012.393);
   nGenGlu_all_stack_2->SetBinError(4,821.1806);
   nGenGlu_all_stack_2->SetBinError(5,601.4007);
   nGenGlu_all_stack_2->SetBinError(6,408.9731);
   nGenGlu_all_stack_2->SetBinError(7,262.5019);
   nGenGlu_all_stack_2->SetBinError(8,162.1737);
   nGenGlu_all_stack_2->SetBinError(9,96.67608);
   nGenGlu_all_stack_2->SetBinError(10,56.04214);
   nGenGlu_all_stack_2->SetBinError(11,31.67587);
   nGenGlu_all_stack_2->SetBinError(12,17.65683);
   nGenGlu_all_stack_2->SetBinError(13,9.332749);
   nGenGlu_all_stack_2->SetBinError(14,5.096765);
   nGenGlu_all_stack_2->SetBinError(15,2.606765);
   nGenGlu_all_stack_2->SetBinError(16,1.440363);
   nGenGlu_all_stack_2->SetEntries(8.905796e+08);

   ci = TColor::GetColor("#990099");
   nGenGlu_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenGlu_all_stack_2->SetLineColor(ci);
   nGenGlu_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenGlu_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenGlu_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenGlu_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenGlu_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenGlu_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenGlu_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenGlu_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenGlu_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("nGenGlu_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenGlu_all__bckg_18->Modified();
   nGenGlu_all__bckg_18->cd();
   nGenGlu_all__bckg_18->SetSelected(nGenGlu_all__bckg_18);
}
