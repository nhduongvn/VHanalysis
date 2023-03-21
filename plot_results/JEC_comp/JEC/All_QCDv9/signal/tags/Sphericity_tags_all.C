#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_all()
{
//=========Macro generated from canvas: Sphericity_tags_all/Sphericity_tags_all
//=========  (Mon Mar 20 11:49:40 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_all = new TCanvas("Sphericity_tags_all", "Sphericity_tags_all",0,0,600,600);
   Sphericity_tags_all->SetHighLightColor(2);
   Sphericity_tags_all->Range(-0.2183529,-1.466376,1.171633,10.75343);
   Sphericity_tags_all->SetFillColor(0);
   Sphericity_tags_all->SetFillStyle(4000);
   Sphericity_tags_all->SetBorderMode(0);
   Sphericity_tags_all->SetBorderSize(2);
   Sphericity_tags_all->SetLeftMargin(0.15709);
   Sphericity_tags_all->SetRightMargin(0.1234783);
   Sphericity_tags_all->SetBottomMargin(0.12);
   Sphericity_tags_all->SetFrameFillStyle(1000);
   Sphericity_tags_all->SetFrameBorderMode(0);
   Sphericity_tags_all->SetFrameFillStyle(1000);
   Sphericity_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.531446);
   
   TH1F *st_stack_60 = new TH1F("st_stack_60","",25,0,1);
   st_stack_60->SetMinimum(0);
   st_stack_60->SetMaximum(9.531446);
   st_stack_60->SetDirectory(0);
   st_stack_60->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_60->SetLineColor(ci);
   st_stack_60->GetXaxis()->SetTitle("Sphericity");
   st_stack_60->GetXaxis()->SetRange(1,25);
   st_stack_60->GetXaxis()->SetLabelFont(42);
   st_stack_60->GetXaxis()->SetTitleOffset(1);
   st_stack_60->GetXaxis()->SetTitleFont(42);
   st_stack_60->GetYaxis()->SetTitle("Event/0.04");
   st_stack_60->GetYaxis()->SetLabelFont(42);
   st_stack_60->GetYaxis()->SetTitleSize(0.037);
   st_stack_60->GetYaxis()->SetTitleFont(42);
   st_stack_60->GetZaxis()->SetLabelFont(42);
   st_stack_60->GetZaxis()->SetTitleOffset(1);
   st_stack_60->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_60);
   
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_1 = new TH1D("VbbHcc_tags_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(1,5.452598);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(2,5.166741);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(3,2.996585);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(4,1.842641);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(5,1.209408);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(6,0.5352992);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(7,0.2304319);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(8,0.09896058);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(9,0.07872779);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(10,0.0501652);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(11,0.03362341);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(12,0.02221341);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(13,0.01335824);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(14,0.02198528);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(15,0.01037159);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(16,0.007227035);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(17,0.006998488);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(18,0.007910893);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(1,0.1207209);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(2,0.1170447);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(3,0.08926336);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(4,0.06833329);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(5,0.06771142);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(6,0.03721794);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(7,0.0245057);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(8,0.01557091);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(9,0.01399104);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(10,0.01104606);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(11,0.008408379);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(12,0.007205622);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(13,0.005603007);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(14,0.007153263);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(15,0.004413619);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(16,0.004319944);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(17,0.004115665);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(18,0.004584965);
   VbbHcc_tags_Sphericity_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_all_stack_1->SetFillColor(ci);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_2 = new TH1D("VbbHcc_tags_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(1,2.458503);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(2,2.219819);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(3,1.175133);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(4,0.7564554);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(5,0.4206795);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(6,0.2331471);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(7,0.1135998);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(8,0.06447657);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(9,0.0440288);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(10,0.02624121);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(11,0.02058522);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(12,0.01534286);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(13,0.01184068);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(14,0.01125134);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(15,0.009599327);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(16,0.005194936);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(17,0.003729402);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(18,0.00287602);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(19,0.002118316);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(20,0.0007924108);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(1,0.02828466);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(2,0.02795022);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(3,0.01953594);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(4,0.01573041);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(5,0.01253607);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(6,0.008915258);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(7,0.006152943);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(8,0.005667171);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(9,0.003765171);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(10,0.00285355);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(11,0.002600235);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(12,0.002247507);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(13,0.001976685);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(14,0.001902252);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(15,0.001779319);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(16,0.001347193);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(17,0.001101809);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(18,0.0009956074);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(19,0.0008183244);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(20,0.0004694306);
   VbbHcc_tags_Sphericity_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_all_stack_2->SetFillColor(ci);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_all->Modified();
   Sphericity_tags_all->cd();
   Sphericity_tags_all->SetSelected(Sphericity_tags_all);
}
