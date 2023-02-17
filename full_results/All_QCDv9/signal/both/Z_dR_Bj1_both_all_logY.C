#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_all/Z_dR_Bj1_both_all
//=========  (Thu Feb 16 10:37:20 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_all = new TCanvas("Z_dR_Bj1_both_all", "Z_dR_Bj1_both_all",0,0,600,600);
   Z_dR_Bj1_both_all->SetHighLightColor(2);
   Z_dR_Bj1_both_all->Range(-1.310117,0.4017896,7.029799,3.131604);
   Z_dR_Bj1_both_all->SetFillColor(0);
   Z_dR_Bj1_both_all->SetFillStyle(4000);
   Z_dR_Bj1_both_all->SetBorderMode(0);
   Z_dR_Bj1_both_all->SetBorderSize(2);
   Z_dR_Bj1_both_all->SetLogy();
   Z_dR_Bj1_both_all->SetLeftMargin(0.15709);
   Z_dR_Bj1_both_all->SetRightMargin(0.1234783);
   Z_dR_Bj1_both_all->SetBottomMargin(0.12);
   Z_dR_Bj1_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_all->SetFrameBorderMode(0);
   Z_dR_Bj1_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(536.5413);
   
   TH1F *st_stack_184 = new TH1F("st_stack_184","",30,0,6);
   st_stack_184->SetMinimum(5.362501);
   st_stack_184->SetMaximum(722.142);
   st_stack_184->SetDirectory(0);
   st_stack_184->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_184->SetLineColor(ci);
   st_stack_184->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_184->GetXaxis()->SetRange(1,30);
   st_stack_184->GetXaxis()->SetLabelFont(42);
   st_stack_184->GetXaxis()->SetTitleOffset(1);
   st_stack_184->GetXaxis()->SetTitleFont(42);
   st_stack_184->GetYaxis()->SetTitle("Events/0.2");
   st_stack_184->GetYaxis()->SetLabelFont(42);
   st_stack_184->GetYaxis()->SetTitleSize(0.037);
   st_stack_184->GetYaxis()->SetTitleFont(42);
   st_stack_184->GetZaxis()->SetLabelFont(42);
   st_stack_184->GetZaxis()->SetTitleOffset(1);
   st_stack_184->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_184);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(1,0.9151261);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(2,3.415263);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(3,3.644978);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(4,2.645133);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(5,1.569398);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(6,0.8408686);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(7,0.6424558);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(8,0.5494246);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(9,0.3876009);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(10,0.3199212);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(11,0.3024239);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(12,0.2748918);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(13,0.2627827);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(14,0.2325022);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(15,0.220252);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(16,0.2070362);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(17,0.09463803);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(18,0.08855329);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(19,0.04719065);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(20,0.01226355);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(21,0.009562293);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(22,0.01202728);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(23,0.01002154);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(24,0.0106833);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(25,0.004315259);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(26,0.001580251);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(28,0.002275762);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(1,0.04394952);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(2,0.08571169);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(3,0.08848472);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(4,0.07544221);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(5,0.05808116);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(6,0.04238864);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(7,0.03702711);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(8,0.0346902);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(9,0.02846357);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(10,0.02630793);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(11,0.0255307);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(12,0.0242435);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(13,0.02387967);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(14,0.02236579);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(15,0.02174806);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(16,0.02092553);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(17,0.01414719);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(18,0.01380344);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(19,0.00983452);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(20,0.005070578);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(21,0.00479766);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(22,0.005032895);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(23,0.005031771);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(24,0.004818046);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(25,0.003158712);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(26,0.001580251);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(28,0.002275762);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(1,0.355658);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(2,1.599586);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(3,1.720435);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(4,1.126556);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(5,0.5413625);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(6,0.2981574);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(7,0.222493);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(8,0.1851239);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(9,0.1578881);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(10,0.1368612);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(11,0.1240056);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(12,0.1140758);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(13,0.09531346);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(14,0.08558409);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(15,0.07824171);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(16,0.07018251);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(17,0.04103884);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(18,0.02435847);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(19,0.01753463);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(20,0.0101098);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(21,0.006317922);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(22,0.002202213);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(23,0.00250187);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(24,0.003101184);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(25,0.001222131);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(26,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(27,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(28,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(29,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(1,0.01004072);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(2,0.02126788);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(3,0.02198732);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(4,0.01780001);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(5,0.01235173);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(6,0.009193825);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(7,0.007883616);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(8,0.007254606);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(9,0.006646784);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(10,0.006185674);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(11,0.005908972);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(12,0.005750987);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(13,0.005184422);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(14,0.00491406);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(15,0.004681707);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(16,0.004445293);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(17,0.003412895);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(18,0.002627502);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(19,0.002187902);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(20,0.001699084);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(21,0.001291057);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(22,0.0007522153);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(23,0.000809705);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(24,0.0009138985);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(25,0.0005557776);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(26,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(27,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(28,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(29,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_1","ZHcc","F");

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
   Z_dR_Bj1_both_all->Modified();
   Z_dR_Bj1_both_all->cd();
   Z_dR_Bj1_both_all->SetSelected(Z_dR_Bj1_both_all);
}
