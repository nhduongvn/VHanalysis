#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_algo_all()
{
//=========Macro generated from canvas: H_pt_algo_all/H_pt_algo_all
//=========  (Mon Dec 19 11:11:22 2022) by ROOT version 6.26/06
   TCanvas *H_pt_algo_all = new TCanvas("H_pt_algo_all", "H_pt_algo_all",0,0,600,600);
   H_pt_algo_all->SetHighLightColor(2);
   H_pt_algo_all->Range(37.97653,-0.5220822,1705.96,3.828603);
   H_pt_algo_all->SetFillColor(0);
   H_pt_algo_all->SetFillStyle(4000);
   H_pt_algo_all->SetBorderMode(0);
   H_pt_algo_all->SetBorderSize(2);
   H_pt_algo_all->SetLeftMargin(0.15709);
   H_pt_algo_all->SetRightMargin(0.1234783);
   H_pt_algo_all->SetBottomMargin(0.12);
   H_pt_algo_all->SetFrameFillStyle(1000);
   H_pt_algo_all->SetFrameBorderMode(0);
   H_pt_algo_all->SetFrameFillStyle(1000);
   H_pt_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.393534);
   
   TH1F *st_stack_72 = new TH1F("st_stack_72","",40,0,2000);
   st_stack_72->SetMinimum(0);
   st_stack_72->SetMaximum(3.393534);
   st_stack_72->SetDirectory(0);
   st_stack_72->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_72->SetLineColor(ci);
   st_stack_72->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_72->GetXaxis()->SetRange(7,30);
   st_stack_72->GetXaxis()->SetLabelFont(42);
   st_stack_72->GetXaxis()->SetTitleOffset(1);
   st_stack_72->GetXaxis()->SetTitleFont(42);
   st_stack_72->GetYaxis()->SetTitle("Events/50.0");
   st_stack_72->GetYaxis()->SetLabelFont(42);
   st_stack_72->GetYaxis()->SetTitleSize(0.037);
   st_stack_72->GetYaxis()->SetTitleFont(42);
   st_stack_72->GetZaxis()->SetLabelFont(42);
   st_stack_72->GetZaxis()->SetTitleOffset(1);
   st_stack_72->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_72);
   
   
   TH1D *VbbHcc_algo_H_pt_all_stack_1 = new TH1D("VbbHcc_algo_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(1,0.4197984);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(2,2.262356);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(3,2.20479);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(4,1.22757);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(5,0.4382249);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(6,0.2064621);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(7,0.1544587);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(8,0.1254943);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(9,0.06465186);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(10,0.0273354);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(11,0.01580303);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(12,0.005428025);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(14,0.003032353);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(1,0.02961685);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(2,0.07088228);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(3,0.06943349);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(4,0.05181618);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(5,0.03044236);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(6,0.02091063);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(7,0.01874168);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(8,0.01619164);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(9,0.01098148);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(10,0.007194938);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(11,0.006128725);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(12,0.003263504);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(14,0.002145229);
   VbbHcc_algo_H_pt_all_stack_1->SetEntries(4155);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_all_stack_2 = new TH1D("VbbHcc_algo_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(1,0.04281395);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(2,0.2746009);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(3,0.6283878);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(4,0.4980824);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(5,0.2219337);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(6,0.09265457);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(7,0.05250853);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(8,0.02385182);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(9,0.01441647);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(10,0.005685618);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(11,0.007015448);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(12,0.003397775);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(13,0.002648508);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(14,0.0006524903);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(15,0.0008824887);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(16,0.0003681385);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(17,0.0004442414);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(18,0.0004055122);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(19,0.0004650931);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(20,0.0004021715);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(21,0.0005019805);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(22,0.0001099566);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(23,0.0001953535);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(24,0.0001737629);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(25,0.0002012167);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(27,0.0002057899);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(1,0.003471998);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(2,0.009027449);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(3,0.0138762);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(4,0.01208879);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(5,0.008119048);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(6,0.005255695);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(7,0.003871241);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(8,0.002647817);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(9,0.001993754);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(10,0.001172727);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(11,0.001409968);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(12,0.001026825);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(13,0.0008598634);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(14,0.0003422731);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(15,0.000569542);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(16,0.0003681385);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(17,0.000314974);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(18,0.0002871816);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(19,0.0004650931);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(20,0.0002849024);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(21,0.0005019805);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(22,0.0001099566);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(23,0.0001953535);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(24,0.0001737629);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(25,0.0002012167);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(27,0.0002057899);
   VbbHcc_algo_H_pt_all_stack_2->SetEntries(7690);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   H_pt_algo_all->Modified();
   H_pt_algo_all->cd();
   H_pt_algo_all->SetSelected(H_pt_algo_all);
}
