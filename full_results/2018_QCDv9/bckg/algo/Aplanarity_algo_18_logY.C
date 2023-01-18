#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Wed Jan 18 11:42:53 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2183529,-1.046972,1.171633,10.281);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetFillStyle(4000);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLogy();
   Aplanarity_algo_18->SetLeftMargin(0.15709);
   Aplanarity_algo_18->SetRightMargin(0.1234783);
   Aplanarity_algo_18->SetBottomMargin(0.12);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.520004e+08);
   
   TH1F *st_stack_127 = new TH1F("st_stack_127","",50,0,1);
   st_stack_127->SetMinimum(2.052979);
   st_stack_127->SetMaximum(1.406711e+09);
   st_stack_127->SetDirectory(0);
   st_stack_127->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_127->SetLineColor(ci);
   st_stack_127->GetXaxis()->SetTitle("Aplanarity");
   st_stack_127->GetXaxis()->SetRange(1,50);
   st_stack_127->GetXaxis()->SetLabelFont(42);
   st_stack_127->GetXaxis()->SetTitleOffset(1);
   st_stack_127->GetXaxis()->SetTitleFont(42);
   st_stack_127->GetYaxis()->SetTitle("Events/0.02");
   st_stack_127->GetYaxis()->SetLabelFont(42);
   st_stack_127->GetYaxis()->SetTitleSize(0.037);
   st_stack_127->GetYaxis()->SetTitleFont(42);
   st_stack_127->GetZaxis()->SetLabelFont(42);
   st_stack_127->GetZaxis()->SetTitleOffset(1);
   st_stack_127->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_127);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,5463180);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,2534641);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,1344345);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,725316.5);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,408569.3);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,269092.9);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,209658.7);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,176701);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,29982.56);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,17173.03);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,8439.412);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,31723.68);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,24386.02);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,12049.29);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,5719.224);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,2373.737);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(18,2570.411);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(19,1166.65);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,204361.1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,167555.6);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,124260.8);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,97479.06);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,74010.4);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,56857.95);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,56792.84);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,53604.58);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,6130.44);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,4865.974);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,3023.029);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,23242.12);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,14029.72);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,4961.776);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,3526.043);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,1983.741);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(18,2535.661);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(19,1166.65);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(38074);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,56823.84);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,42007.06);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,28606.03);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,20075.25);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,14350.2);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,10406.66);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,7627.323);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,5625.16);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,4108.137);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,3003.747);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,2182.877);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,1561.83);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,1097.144);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,756.4448);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,516.6594);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,333.2361);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,211.2145);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,120.0159);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,68.35474);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(20,35.73325);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(21,15.10085);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(22,6.389592);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(23,2.164238);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(24,0.07282055);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,73.55028);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,63.44378);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,52.77393);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,43.85506);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,37.30555);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,31.69424);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,27.05907);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,22.82314);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,19.85334);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,16.77845);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,14.24894);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,12.34891);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,10.1489);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,8.312464);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,7.013791);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,5.51792);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,4.560502);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,3.381807);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,2.678802);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(20,1.804212);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(21,1.169591);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(22,0.7693791);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(23,0.4392424);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(24,0.07282055);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(2572457);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

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
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
