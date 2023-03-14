#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenGlu_all__bckg_16_logY()
{
//=========Macro generated from canvas: nGenGlu_all__bckg_16/nGenGlu_all__bckg_16
//=========  (Mon Mar  6 10:58:23 2023) by ROOT version 6.26/06
   TCanvas *nGenGlu_all__bckg_16 = new TCanvas("nGenGlu_all__bckg_16", "nGenGlu_all__bckg_16",0,0,600,600);
   nGenGlu_all__bckg_16->SetHighLightColor(2);
   nGenGlu_all__bckg_16->Range(-3.775293,2.156466,17.0745,12.9485);
   nGenGlu_all__bckg_16->SetFillColor(0);
   nGenGlu_all__bckg_16->SetFillStyle(4000);
   nGenGlu_all__bckg_16->SetBorderMode(0);
   nGenGlu_all__bckg_16->SetBorderSize(2);
   nGenGlu_all__bckg_16->SetLogy();
   nGenGlu_all__bckg_16->SetLeftMargin(0.15709);
   nGenGlu_all__bckg_16->SetRightMargin(0.1234783);
   nGenGlu_all__bckg_16->SetBottomMargin(0.12);
   nGenGlu_all__bckg_16->SetFrameFillStyle(1000);
   nGenGlu_all__bckg_16->SetFrameBorderMode(0);
   nGenGlu_all__bckg_16->SetFrameFillStyle(1000);
   nGenGlu_all__bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(13228.78);
   
   TH1F *st_stack_26 = new TH1F("st_stack_26","",15,-0.5,14.5);
   st_stack_26->SetMinimum(2828.2);
   st_stack_26->SetMaximum(7.401158e+11);
   st_stack_26->SetDirectory(0);
   st_stack_26->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_26->SetLineColor(ci);
   st_stack_26->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_26->GetXaxis()->SetLabelFont(42);
   st_stack_26->GetXaxis()->SetTitleOffset(1);
   st_stack_26->GetXaxis()->SetTitleFont(42);
   st_stack_26->GetYaxis()->SetTitle("Events/1.0");
   st_stack_26->GetYaxis()->SetLabelFont(42);
   st_stack_26->GetYaxis()->SetTitleSize(0.037);
   st_stack_26->GetYaxis()->SetTitleFont(42);
   st_stack_26->GetZaxis()->SetLabelFont(42);
   st_stack_26->GetZaxis()->SetTitleOffset(1);
   st_stack_26->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_26);
   
   
   TH1D *nGenGlu_all_stack_1 = new TH1D("nGenGlu_all_stack_1","",15,-0.5,14.5);
   nGenGlu_all_stack_1->SetBinContent(1,4.028129e+10);
   nGenGlu_all_stack_1->SetBinContent(2,1.622649e+11);
   nGenGlu_all_stack_1->SetBinContent(3,2.870636e+11);
   nGenGlu_all_stack_1->SetBinContent(4,2.995181e+11);
   nGenGlu_all_stack_1->SetBinContent(5,2.023472e+11);
   nGenGlu_all_stack_1->SetBinContent(6,9.85451e+10);
   nGenGlu_all_stack_1->SetBinContent(7,4.026156e+10);
   nGenGlu_all_stack_1->SetBinContent(8,1.481796e+10);
   nGenGlu_all_stack_1->SetBinContent(9,5.08439e+09);
   nGenGlu_all_stack_1->SetBinContent(10,1.653263e+09);
   nGenGlu_all_stack_1->SetBinContent(11,5.213002e+08);
   nGenGlu_all_stack_1->SetBinContent(12,1.553239e+08);
   nGenGlu_all_stack_1->SetBinContent(13,4.605446e+07);
   nGenGlu_all_stack_1->SetBinContent(14,1.32286e+07);
   nGenGlu_all_stack_1->SetBinContent(15,3182417);
   nGenGlu_all_stack_1->SetBinContent(16,977723.4);
   nGenGlu_all_stack_1->SetBinError(1,2.92925e+07);
   nGenGlu_all_stack_1->SetBinError(2,5.891242e+07);
   nGenGlu_all_stack_1->SetBinError(3,7.828972e+07);
   nGenGlu_all_stack_1->SetBinError(4,7.960957e+07);
   nGenGlu_all_stack_1->SetBinError(5,6.478598e+07);
   nGenGlu_all_stack_1->SetBinError(6,4.447506e+07);
   nGenGlu_all_stack_1->SetBinError(7,2.783557e+07);
   nGenGlu_all_stack_1->SetBinError(8,1.648792e+07);
   nGenGlu_all_stack_1->SetBinError(9,9412789);
   nGenGlu_all_stack_1->SetBinError(10,5230806);
   nGenGlu_all_stack_1->SetBinError(11,2866656);
   nGenGlu_all_stack_1->SetBinError(12,1523731);
   nGenGlu_all_stack_1->SetBinError(13,813192.5);
   nGenGlu_all_stack_1->SetBinError(14,425975.4);
   nGenGlu_all_stack_1->SetBinError(15,194169.3);
   nGenGlu_all_stack_1->SetBinError(16,96523.12);
   nGenGlu_all_stack_1->SetEntries(2.393713e+08);

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
   nGenGlu_all_stack_2->SetBinContent(1,4954676);
   nGenGlu_all_stack_2->SetBinContent(2,8191408);
   nGenGlu_all_stack_2->SetBinContent(3,7358567);
   nGenGlu_all_stack_2->SetBinContent(4,4822423);
   nGenGlu_all_stack_2->SetBinContent(5,2574236);
   nGenGlu_all_stack_2->SetBinContent(6,1187518);
   nGenGlu_all_stack_2->SetBinContent(7,490828.6);
   nGenGlu_all_stack_2->SetBinContent(8,186367.3);
   nGenGlu_all_stack_2->SetBinContent(9,65825.95);
   nGenGlu_all_stack_2->SetBinContent(10,22016.63);
   nGenGlu_all_stack_2->SetBinContent(11,6966.069);
   nGenGlu_all_stack_2->SetBinContent(12,2143.457);
   nGenGlu_all_stack_2->SetBinContent(13,624.7687);
   nGenGlu_all_stack_2->SetBinContent(14,175.7283);
   nGenGlu_all_stack_2->SetBinContent(15,45.31298);
   nGenGlu_all_stack_2->SetBinContent(16,18.31387);
   nGenGlu_all_stack_2->SetBinError(1,557.5551);
   nGenGlu_all_stack_2->SetBinError(2,719.6856);
   nGenGlu_all_stack_2->SetBinError(3,683.6284);
   nGenGlu_all_stack_2->SetBinError(4,554.0002);
   nGenGlu_all_stack_2->SetBinError(5,404.885);
   nGenGlu_all_stack_2->SetBinError(6,274.9713);
   nGenGlu_all_stack_2->SetBinError(7,176.6971);
   nGenGlu_all_stack_2->SetBinError(8,108.8051);
   nGenGlu_all_stack_2->SetBinError(9,64.60234);
   nGenGlu_all_stack_2->SetBinError(10,37.32391);
   nGenGlu_all_stack_2->SetBinError(11,20.9893);
   nGenGlu_all_stack_2->SetBinError(12,11.61062);
   nGenGlu_all_stack_2->SetBinError(13,6.260488);
   nGenGlu_all_stack_2->SetBinError(14,3.322061);
   nGenGlu_all_stack_2->SetBinError(15,1.687771);
   nGenGlu_all_stack_2->SetBinError(16,1.072269);
   nGenGlu_all_stack_2->SetEntries(5.126171e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenGlu_all__bckg_16->Modified();
   nGenGlu_all__bckg_16->cd();
   nGenGlu_all__bckg_16->SetSelected(nGenGlu_all__bckg_16);
}
