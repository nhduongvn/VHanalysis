#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_16()
{
//=========Macro generated from canvas: H_dR_Bj1_both_16/H_dR_Bj1_both_16
//=========  (Thu Mar  9 13:09:07 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_both_16 = new TCanvas("H_dR_Bj1_both_16", "H_dR_Bj1_both_16",0,0,600,600);
   H_dR_Bj1_both_16->SetHighLightColor(2);
   H_dR_Bj1_both_16->Range(-1.310117,-0.1624311,7.029799,1.191162);
   H_dR_Bj1_both_16->SetFillColor(0);
   H_dR_Bj1_both_16->SetFillStyle(4000);
   H_dR_Bj1_both_16->SetBorderMode(0);
   H_dR_Bj1_both_16->SetBorderSize(2);
   H_dR_Bj1_both_16->SetLeftMargin(0.15709);
   H_dR_Bj1_both_16->SetRightMargin(0.1234783);
   H_dR_Bj1_both_16->SetBottomMargin(0.12);
   H_dR_Bj1_both_16->SetFrameFillStyle(1000);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   H_dR_Bj1_both_16->SetFrameFillStyle(1000);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.055802);
   
   TH1F *st_stack_173 = new TH1F("st_stack_173","",30,0,6);
   st_stack_173->SetMinimum(0);
   st_stack_173->SetMaximum(1.055802);
   st_stack_173->SetDirectory(0);
   st_stack_173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_173->SetLineColor(ci);
   st_stack_173->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_173->GetXaxis()->SetRange(1,30);
   st_stack_173->GetXaxis()->SetLabelFont(42);
   st_stack_173->GetXaxis()->SetTitleOffset(1);
   st_stack_173->GetXaxis()->SetTitleFont(42);
   st_stack_173->GetYaxis()->SetTitle("Event/0.2");
   st_stack_173->GetYaxis()->SetLabelFont(42);
   st_stack_173->GetYaxis()->SetTitleSize(0.037);
   st_stack_173->GetYaxis()->SetTitleFont(42);
   st_stack_173->GetZaxis()->SetLabelFont(42);
   st_stack_173->GetZaxis()->SetTitleOffset(1);
   st_stack_173->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_173);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,0.1367504);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,0.5114464);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,0.6044366);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,0.5880266);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,0.4731563);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,0.2981158);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,0.2023906);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,0.1805105);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,0.1066653);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,0.09846027);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,0.08205022);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,0.09572526);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,0.0738452);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,0.0738452);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,0.0738452);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,0.07658021);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,0.02735007);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,0.02188006);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,0.01367504);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,0.01094003);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,0.01094003);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,0.01933942);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,0.03740066);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,0.04065881);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,0.04010308);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,0.03597341);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,0.02855432);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,0.02352742);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,0.02221931);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,0.01708012);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,0.01641004);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,0.01498025);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,0.01618052);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,0.01421152);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,0.01421152);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,0.01421152);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,0.0144723);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,0.008648853);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,0.007735769);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,0.006115663);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,0.005470015);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,0.005470015);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,0.0439437);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,0.2057851);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,0.2718793);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,0.2468707);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,0.2000689);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,0.1379046);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,0.09038826);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,0.06645145);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,0.05144628);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,0.04358643);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,0.03858471);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,0.03429752);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,0.02679494);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,0.0292958);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,0.02357955);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,0.02286501);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,0.0146479);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,0.009646178);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,0.005001722);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,0.003572658);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,0.002500861);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,0.001429063);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,0.002500861);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.001071798);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.001071798);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(28,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(29,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,0.00396227);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,0.00857438);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,0.009855617);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,0.009391404);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,0.008454453);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,0.00701916);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,0.005682661);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,0.004872457);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,0.00428719);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,0.00394613);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,0.003712816);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,0.003500476);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,0.003094013);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,0.00323518);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,0.002902441);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,0.002858127);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,0.002287618);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,0.001856408);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.001336766);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.001129774);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.0009452366);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.0009452366);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.0006188026);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.0006188026);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(28,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(29,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_both_16->Modified();
   H_dR_Bj1_both_16->cd();
   H_dR_Bj1_both_16->SetSelected(H_dR_Bj1_both_16);
}
