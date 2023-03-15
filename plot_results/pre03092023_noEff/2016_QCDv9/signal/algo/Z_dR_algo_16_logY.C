#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_16_logY()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.310117,-0.03039348,7.029799,0.2228855);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetFillStyle(4000);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetLogy();
   Z_dR_algo_16->SetLeftMargin(0.15709);
   Z_dR_algo_16->SetRightMargin(0.1234783);
   Z_dR_algo_16->SetBottomMargin(0.12);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_81 = new TH1F("st_stack_81","",30,0,6);
   st_stack_81->SetMinimum(-2.292133e+09);
   st_stack_81->SetMaximum(-0.2154505);
   st_stack_81->SetDirectory(0);
   st_stack_81->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_81->SetLineColor(ci);
   st_stack_81->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_81->GetXaxis()->SetRange(1,30);
   st_stack_81->GetXaxis()->SetLabelFont(42);
   st_stack_81->GetXaxis()->SetTitleOffset(1);
   st_stack_81->GetXaxis()->SetTitleFont(42);
   st_stack_81->GetYaxis()->SetTitle("Event/0.2");
   st_stack_81->GetYaxis()->SetLabelFont(42);
   st_stack_81->GetYaxis()->SetTitleSize(0.037);
   st_stack_81->GetYaxis()->SetTitleFont(42);
   st_stack_81->GetZaxis()->SetLabelFont(42);
   st_stack_81->GetZaxis()->SetTitleOffset(1);
   st_stack_81->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_81);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.09683843);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.1428542);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.1292122);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.1184917);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.1043644);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.04890571);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.03455415);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.008913848);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.002397045);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.008854409);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.006361236);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.002383053);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.002400151);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.001894245);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,0.002104627);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.01501422);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.01753645);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.01717991);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.01617352);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.01511645);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.01035994);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.008560715);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.004461518);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.002397045);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.00445044);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.003675584);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.002383053);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.002400151);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.001894245);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,0.002104627);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.000278038);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.01816507);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.04529593);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.05318638);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.05347664);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.02958975);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.01490786);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.007726661);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.00568154);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.004383583);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.001715095);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.003649841);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.002784615);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.002931802);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.002681847);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.0002900505);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.0002737686);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.0002524103);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.000278038);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.002258164);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.003588253);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.003892065);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.003908159);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.002917648);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.002061061);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.001489194);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.001261199);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.0010986);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.0007029963);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.001025138);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.0008831989);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.0009283345);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.0008780398);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.0002900505);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.0002737686);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.0002524103);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
