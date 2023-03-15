#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenJet_bckg_17()
{
//=========Macro generated from canvas: GenJet_all_nGenJet_bckg_17/GenJet_all_nGenJet_bckg_17
//=========  (Thu Mar  9 15:52:35 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenJet_bckg_17 = new TCanvas("GenJet_all_nGenJet_bckg_17", "GenJet_all_nGenJet_bckg_17",0,0,600,600);
   GenJet_all_nGenJet_bckg_17->SetHighLightColor(2);
   GenJet_all_nGenJet_bckg_17->Range(-4.867058,-6.86973e+10,22.93266,5.037802e+11);
   GenJet_all_nGenJet_bckg_17->SetFillColor(0);
   GenJet_all_nGenJet_bckg_17->SetFillStyle(4000);
   GenJet_all_nGenJet_bckg_17->SetBorderMode(0);
   GenJet_all_nGenJet_bckg_17->SetBorderSize(2);
   GenJet_all_nGenJet_bckg_17->SetLeftMargin(0.15709);
   GenJet_all_nGenJet_bckg_17->SetRightMargin(0.1234783);
   GenJet_all_nGenJet_bckg_17->SetBottomMargin(0.12);
   GenJet_all_nGenJet_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_bckg_17->SetFrameBorderMode(0);
   GenJet_all_nGenJet_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.465324e+11);
   
   TH1F *st_stack_4 = new TH1F("st_stack_4","",20,-0.5,19.5);
   st_stack_4->SetMinimum(0);
   st_stack_4->SetMaximum(4.465324e+11);
   st_stack_4->SetDirectory(0);
   st_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_4->SetLineColor(ci);
   st_stack_4->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_4->GetXaxis()->SetLabelFont(42);
   st_stack_4->GetXaxis()->SetTitleOffset(1);
   st_stack_4->GetXaxis()->SetTitleFont(42);
   st_stack_4->GetYaxis()->SetTitle("Event/1.0");
   st_stack_4->GetYaxis()->SetLabelFont(42);
   st_stack_4->GetYaxis()->SetTitleSize(0.037);
   st_stack_4->GetYaxis()->SetTitleFont(42);
   st_stack_4->GetZaxis()->SetLabelFont(42);
   st_stack_4->GetZaxis()->SetTitleOffset(1);
   st_stack_4->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_4);
   
   
   TH1D *GenJet_all_nGenJet_stack_1 = new TH1D("GenJet_all_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenJet_stack_1->SetBinContent(1,86713.84);
   GenJet_all_nGenJet_stack_1->SetBinContent(2,5.931591e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(3,1.440947e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(4,3.414859e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(5,3.706209e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(6,2.585576e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(7,1.479858e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(8,7.69363e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(9,3.783168e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(10,1.785928e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(11,8.209776e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(12,3.683907e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(13,1.620105e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(14,6.966228e+08);
   GenJet_all_nGenJet_stack_1->SetBinContent(15,2.935455e+08);
   GenJet_all_nGenJet_stack_1->SetBinContent(16,1.234046e+08);
   GenJet_all_nGenJet_stack_1->SetBinContent(17,5.128048e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(18,1.988795e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(19,7934593);
   GenJet_all_nGenJet_stack_1->SetBinContent(20,2941430);
   GenJet_all_nGenJet_stack_1->SetBinContent(21,1995410);
   GenJet_all_nGenJet_stack_1->SetBinError(1,39199.09);
   GenJet_all_nGenJet_stack_1->SetBinError(2,1012244);
   GenJet_all_nGenJet_stack_1->SetBinError(3,4.901048e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(4,7.533132e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(5,7.783651e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(6,6.416641e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(7,4.779293e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(8,3.392228e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(9,2.344346e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(10,1.590491e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(11,1.066757e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(12,7078294);
   GenJet_all_nGenJet_stack_1->SetBinError(13,4656117);
   GenJet_all_nGenJet_stack_1->SetBinError(14,3028509);
   GenJet_all_nGenJet_stack_1->SetBinError(15,1952809);
   GenJet_all_nGenJet_stack_1->SetBinError(16,1261691);
   GenJet_all_nGenJet_stack_1->SetBinError(17,806087.1);
   GenJet_all_nGenJet_stack_1->SetBinError(18,498790.9);
   GenJet_all_nGenJet_stack_1->SetBinError(19,310862.4);
   GenJet_all_nGenJet_stack_1->SetBinError(20,186308.7);
   GenJet_all_nGenJet_stack_1->SetBinError(21,155041.8);
   GenJet_all_nGenJet_stack_1->SetEntries(3.060973e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenJet_stack_1->SetFillColor(ci);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenJet_stack_1,"");
   
   TH1D *GenJet_all_nGenJet_stack_2 = new TH1D("GenJet_all_nGenJet_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenJet_stack_2->SetBinContent(1,2.866222);
   GenJet_all_nGenJet_stack_2->SetBinContent(2,372.4496);
   GenJet_all_nGenJet_stack_2->SetBinContent(3,12891.04);
   GenJet_all_nGenJet_stack_2->SetBinContent(4,166317.4);
   GenJet_all_nGenJet_stack_2->SetBinContent(5,979119.9);
   GenJet_all_nGenJet_stack_2->SetBinContent(6,2950467);
   GenJet_all_nGenJet_stack_2->SetBinContent(7,5344179);
   GenJet_all_nGenJet_stack_2->SetBinContent(8,6692595);
   GenJet_all_nGenJet_stack_2->SetBinContent(9,6479840);
   GenJet_all_nGenJet_stack_2->SetBinContent(10,5188911);
   GenJet_all_nGenJet_stack_2->SetBinContent(11,3599726);
   GenJet_all_nGenJet_stack_2->SetBinContent(12,2239071);
   GenJet_all_nGenJet_stack_2->SetBinContent(13,1279884);
   GenJet_all_nGenJet_stack_2->SetBinContent(14,683654.4);
   GenJet_all_nGenJet_stack_2->SetBinContent(15,345997.9);
   GenJet_all_nGenJet_stack_2->SetBinContent(16,167347.5);
   GenJet_all_nGenJet_stack_2->SetBinContent(17,78128.82);
   GenJet_all_nGenJet_stack_2->SetBinContent(18,35176.6);
   GenJet_all_nGenJet_stack_2->SetBinContent(19,15355.96);
   GenJet_all_nGenJet_stack_2->SetBinContent(20,6560.454);
   GenJet_all_nGenJet_stack_2->SetBinContent(21,4562.484);
   GenJet_all_nGenJet_stack_2->SetBinError(1,0.3451029);
   GenJet_all_nGenJet_stack_2->SetBinError(2,3.965877);
   GenJet_all_nGenJet_stack_2->SetBinError(3,23.70154);
   GenJet_all_nGenJet_stack_2->SetBinError(4,87.19898);
   GenJet_all_nGenJet_stack_2->SetBinError(5,220.5437);
   GenJet_all_nGenJet_stack_2->SetBinError(6,404.8895);
   GenJet_all_nGenJet_stack_2->SetBinError(7,573.5198);
   GenJet_all_nGenJet_stack_2->SetBinError(8,661.7022);
   GenJet_all_nGenJet_stack_2->SetBinError(9,663.8451);
   GenJet_all_nGenJet_stack_2->SetBinError(10,601.7244);
   GenJet_all_nGenJet_stack_2->SetBinError(11,505.524);
   GenJet_all_nGenJet_stack_2->SetBinError(12,401.0837);
   GenJet_all_nGenJet_stack_2->SetBinError(13,304.5136);
   GenJet_all_nGenJet_stack_2->SetBinError(14,223.2235);
   GenJet_all_nGenJet_stack_2->SetBinError(15,159.1961);
   GenJet_all_nGenJet_stack_2->SetBinError(16,110.9172);
   GenJet_all_nGenJet_stack_2->SetBinError(17,75.8776);
   GenJet_all_nGenJet_stack_2->SetBinError(18,50.98597);
   GenJet_all_nGenJet_stack_2->SetBinError(19,33.72234);
   GenJet_all_nGenJet_stack_2->SetBinError(20,22.05817);
   GenJet_all_nGenJet_stack_2->SetBinError(21,18.42888);
   GenJet_all_nGenJet_stack_2->SetEntries(6.227592e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenJet_stack_2->SetFillColor(ci);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenJet_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_all_nGenJet_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenJet_bckg_17->Modified();
   GenJet_all_nGenJet_bckg_17->cd();
   GenJet_all_nGenJet_bckg_17->SetSelected(GenJet_all_nGenJet_bckg_17);
}
