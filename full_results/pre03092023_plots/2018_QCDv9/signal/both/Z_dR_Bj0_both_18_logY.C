#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_18/Z_dR_Bj0_both_18
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_18 = new TCanvas("Z_dR_Bj0_both_18", "Z_dR_Bj0_both_18",0,0,600,600);
   Z_dR_Bj0_both_18->SetHighLightColor(2);
   Z_dR_Bj0_both_18->Range(-1.310117,-3.302169,7.029799,0.5439844);
   Z_dR_Bj0_both_18->SetFillColor(0);
   Z_dR_Bj0_both_18->SetFillStyle(4000);
   Z_dR_Bj0_both_18->SetBorderMode(0);
   Z_dR_Bj0_both_18->SetBorderSize(2);
   Z_dR_Bj0_both_18->SetLogy();
   Z_dR_Bj0_both_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_both_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_both_18->SetBottomMargin(0.12);
   Z_dR_Bj0_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_18->SetFrameBorderMode(0);
   Z_dR_Bj0_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_179 = new TH1F("st_stack_179","",30,0,6);
   st_stack_179->SetMinimum(16.23624);
   st_stack_179->SetMaximum(1.443341);
   st_stack_179->SetDirectory(0);
   st_stack_179->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_179->SetLineColor(ci);
   st_stack_179->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_179->GetXaxis()->SetRange(1,30);
   st_stack_179->GetXaxis()->SetLabelFont(42);
   st_stack_179->GetXaxis()->SetTitleOffset(1);
   st_stack_179->GetXaxis()->SetTitleFont(42);
   st_stack_179->GetYaxis()->SetTitle("Event/0.2");
   st_stack_179->GetYaxis()->SetLabelFont(42);
   st_stack_179->GetYaxis()->SetTitleSize(0.037);
   st_stack_179->GetYaxis()->SetTitleFont(42);
   st_stack_179->GetZaxis()->SetLabelFont(42);
   st_stack_179->GetZaxis()->SetTitleOffset(1);
   st_stack_179->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_179);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,0.2977542);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,1.175008);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,1.106173);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,0.7091671);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,0.4514337);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,0.2721409);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,0.1969019);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,0.1488771);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,0.1392721);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,0.09765055);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,0.08644475);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,0.08164227);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,0.07683978);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,0.08164227);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,0.07523895);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,0.06723481);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,0.04802486);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,0.02721409);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,0.02561326);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,0.003201658);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,0.003201658);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,0.003201658);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,0.001600829);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(31,0.001600829);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,0.02183239);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,0.04337035);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,0.04208079);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,0.03369355);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,0.02688249);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,0.02087225);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,0.01775405);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,0.01543783);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,0.01493154);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,0.01250287);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,0.01176364);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,0.0114322);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,0.01109087);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,0.0114322);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,0.01097473);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,0.01037456);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,0.0087681);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,0.006600386);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,0.006403315);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,0.002263914);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,0.002263914);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,0.002263914);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,0.001600829);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(31,0.001600829);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(3234);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,0.1087657);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,0.5303381);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,0.5503628);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,0.3281941);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,0.1652564);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,0.08431448);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,0.06639766);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,0.0564907);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,0.04595139);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,0.03878466);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,0.03499051);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,0.03014243);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,0.02972086);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,0.02740221);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,0.02761299);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,0.02171098);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,0.01454425);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,0.00779909);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,0.005691228);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,0.002318648);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,0.001053931);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,0.001264717);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,0.001053931);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,0.0002107862);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,0.0006323586);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,0.0004215724);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(28,0.0002107862);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(29,0.0004215724);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,0.004788142);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,0.01057298);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,0.01077074);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,0.008317379);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,0.005902014);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,0.004215724);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,0.003741084);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,0.003450719);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,0.003112221);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,0.002859243);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,0.00271579);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,0.002520636);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,0.002502948);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,0.002403333);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,0.002412558);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,0.002139246);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,0.001750922);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,0.001282162);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,0.001095277);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,0.0006990988);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,0.0004713323);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,0.0005163187);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,0.0004713323);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.0002107862);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.0003650924);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.0002980967);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(28,0.0002107862);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(29,0.0002980967);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(10352);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_18->Modified();
   Z_dR_Bj0_both_18->cd();
   Z_dR_Bj0_both_18->SetSelected(Z_dR_Bj0_both_18);
}
