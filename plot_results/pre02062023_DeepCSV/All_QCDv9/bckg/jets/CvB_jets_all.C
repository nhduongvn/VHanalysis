#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all()
{
//=========Macro generated from canvas: CvB_jets_all/CvB_jets_all
//=========  (Mon Dec 19 11:02:46 2022) by ROOT version 6.26/06
   TCanvas *CvB_jets_all = new TCanvas("CvB_jets_all", "CvB_jets_all",0,0,600,600);
   CvB_jets_all->SetHighLightColor(2);
   CvB_jets_all->Range(-0.2183529,-4.612241e+11,1.171633,3.38231e+12);
   CvB_jets_all->SetFillColor(0);
   CvB_jets_all->SetFillStyle(4000);
   CvB_jets_all->SetBorderMode(0);
   CvB_jets_all->SetBorderSize(2);
   CvB_jets_all->SetLeftMargin(0.15709);
   CvB_jets_all->SetRightMargin(0.1234783);
   CvB_jets_all->SetBottomMargin(0.12);
   CvB_jets_all->SetFrameFillStyle(1000);
   CvB_jets_all->SetFrameBorderMode(0);
   CvB_jets_all->SetFrameFillStyle(1000);
   CvB_jets_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.997957e+12);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",20,0,1);
   st_stack_16->SetMinimum(0);
   st_stack_16->SetMaximum(2.997957e+12);
   st_stack_16->SetDirectory(0);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_16->GetXaxis()->SetRange(1,20);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetTitleOffset(1);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Events/0.05");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetTitleSize(0.037);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VbbHcc_jets_CvB_all_stack_1 = new TH1D("VbbHcc_jets_CvB_all_stack_1","",20,0,1);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(1,8.402237e+10);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(2,1.857199e+10);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(3,1.452771e+10);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(4,1.498448e+10);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(5,1.730291e+10);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(6,2.055149e+10);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(7,2.511898e+10);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(8,3.164131e+10);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(9,4.199211e+10);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(10,6.138569e+10);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(11,8.599243e+10);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(12,1.227415e+11);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(13,1.794194e+11);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(14,2.603257e+11);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(15,4.158643e+11);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(16,6.881818e+11);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(17,1.213036e+12);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(18,1.998556e+12);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(19,1.103906e+12);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(20,6.779343e+10);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(1,4.137157e+07);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(2,1.917207e+07);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(3,1.710043e+07);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(4,1.733208e+07);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(5,1.865089e+07);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(6,2.031685e+07);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(7,2.241196e+07);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(8,2.514512e+07);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(9,2.911021e+07);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(10,3.494886e+07);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(11,4.141365e+07);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(12,4.964756e+07);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(13,6.011045e+07);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(14,7.252095e+07);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(15,9.20552e+07);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(16,1.190079e+08);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(17,1.583456e+08);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(18,2.037236e+08);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(19,1.522319e+08);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(20,3.605241e+07);
   VbbHcc_jets_CvB_all_stack_1->SetEntries(2.27431e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CvB_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvB_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_all_stack_1,"");
   
   TH1D *VbbHcc_jets_CvB_all_stack_2 = new TH1D("VbbHcc_jets_CvB_all_stack_2","",20,0,1);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(1,8.181275e+07);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(2,1.296521e+07);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(3,8526569);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(4,7505770);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(5,7040723);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(6,6506484);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(7,6381199);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(8,6543652);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(9,7259736);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(10,8119815);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(11,9056062);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(12,1.056702e+07);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(13,1.355896e+07);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(14,1.780711e+07);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(15,2.483944e+07);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(16,3.49419e+07);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(17,5.299417e+07);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(18,8.169573e+07);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(19,7.337694e+07);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(20,1.079169e+07);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(1,2526.989);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(2,1001.979);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(3,812.6581);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(4,762.9232);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(5,738.2868);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(6,710.4339);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(7,703.5065);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(8,712.0292);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(9,749.0697);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(10,792.9798);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(11,838.7325);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(12,908.725);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(13,1031.677);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(14,1183.108);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(15,1403.252);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(16,1674.432);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(17,2073.69);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(18,2600.221);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(19,2499.154);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(20,960.75);
   VbbHcc_jets_CvB_all_stack_2->SetEntries(7.170845e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CvB_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvB_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvB_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvB_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_all->Modified();
   CvB_jets_all->cd();
   CvB_jets_all->SetSelected(CvB_jets_all);
}
