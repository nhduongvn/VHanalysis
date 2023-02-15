#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Tue Feb 14 16:10:10 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2183529,-7227950,1.171633,5.300497e+07);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetFillStyle(4000);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15709);
   Aplanarity_tags_18->SetRightMargin(0.1234783);
   Aplanarity_tags_18->SetBottomMargin(0.12);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.698168e+07);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",50,0,1);
   st_stack_63->SetMinimum(0);
   st_stack_63->SetMaximum(4.698168e+07);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetTitle("Aplanarity");
   st_stack_63->GetXaxis()->SetRange(1,50);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetTitleOffset(1);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Events/0.02");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetTitleSize(0.037);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetTitleOffset(1);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,3.004576e+07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,1.349059e+07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,7054061);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,3730014);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,2150954);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,1437834);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,965423.9);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,636865.4);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,510647.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,365849.3);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,169554.4);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,128847.8);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,71363.75);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,36679.15);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,58175.65);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,17650.05);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,31757.39);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,4949.599);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,2611.248);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,2808.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(21,2930.142);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,442570.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,341074.8);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,232281.2);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,166953.3);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,113365.8);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,100935);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,86027.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,72658.27);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,84376.89);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,61951.96);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,36495.95);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,35823.04);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,11747.07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,7741.485);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,26009.66);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,6044.825);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,24406.83);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,3074.674);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,1533.45);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,2362.279);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(21,2866.461);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(477143);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(0,0.4129542);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,1275354);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,898002);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,600534.8);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,413534.7);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,291503.9);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,208585);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,150803.5);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,109600.9);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,79557.4);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,57479.26);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,41390.53);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,29257.06);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,20543.46);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,14052.74);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,9431.239);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,6120.189);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,3836.453);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,2256.191);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,1253.087);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,631.4874);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,269.1815);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(22,104.7724);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(23,26.02771);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(24,4.588996);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(25,0.1580879);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(0,0.1813495);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,350.5503);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,293.702);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,240.0581);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,199.9729);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,167.966);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,142.1673);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,120.4234);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,102.7452);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,87.46141);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,74.60457);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,63.01012);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,52.59408);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,45.27064);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,37.00493);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,30.73083);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,24.34055);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,19.42349);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,15.05175);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,10.51952);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,7.746004);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,4.854143);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(22,2.991136);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(23,1.494586);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(24,0.6176506);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(25,0.1143575);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(5.418176e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

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
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
