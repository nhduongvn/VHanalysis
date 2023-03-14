#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_16()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_16/H_dR_Bj0_tags_16
//=========  (Thu Mar  9 13:09:05 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_tags_16 = new TCanvas("H_dR_Bj0_tags_16", "H_dR_Bj0_tags_16",0,0,600,600);
   H_dR_Bj0_tags_16->SetHighLightColor(2);
   H_dR_Bj0_tags_16->Range(-1.310117,-0.1593644,7.029799,1.168672);
   H_dR_Bj0_tags_16->SetFillColor(0);
   H_dR_Bj0_tags_16->SetFillStyle(4000);
   H_dR_Bj0_tags_16->SetBorderMode(0);
   H_dR_Bj0_tags_16->SetBorderSize(2);
   H_dR_Bj0_tags_16->SetLeftMargin(0.15709);
   H_dR_Bj0_tags_16->SetRightMargin(0.1234783);
   H_dR_Bj0_tags_16->SetBottomMargin(0.12);
   H_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
   H_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.035868);
   
   TH1F *st_stack_41 = new TH1F("st_stack_41","",30,0,6);
   st_stack_41->SetMinimum(0);
   st_stack_41->SetMaximum(1.035868);
   st_stack_41->SetDirectory(0);
   st_stack_41->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_41->SetLineColor(ci);
   st_stack_41->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_41->GetXaxis()->SetRange(1,30);
   st_stack_41->GetXaxis()->SetLabelFont(42);
   st_stack_41->GetXaxis()->SetTitleOffset(1);
   st_stack_41->GetXaxis()->SetTitleFont(42);
   st_stack_41->GetYaxis()->SetTitle("Event/0.2");
   st_stack_41->GetYaxis()->SetLabelFont(42);
   st_stack_41->GetYaxis()->SetTitleSize(0.037);
   st_stack_41->GetYaxis()->SetTitleFont(42);
   st_stack_41->GetZaxis()->SetLabelFont(42);
   st_stack_41->GetZaxis()->SetTitleOffset(1);
   st_stack_41->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_41);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,0.08478523);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,0.5087114);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,0.5989666);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,0.5579415);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,0.4430712);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,0.2707657);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,0.2160656);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,0.1723055);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,0.1504254);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,0.1039303);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,0.08205022);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,0.1094003);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,0.07658021);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,0.07658021);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,0.06564018);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,0.08205022);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,0.01641004);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,0.02188006);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,0.02461507);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,0.02188006);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,0.005470015);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,0.005470015);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,0.01522788);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,0.03730053);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,0.04047441);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,0.03906372);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,0.03481096);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,0.02721298);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,0.02430928);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,0.02170845);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,0.02028336);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,0.01685972);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,0.01498025);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,0.01729771);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,0.0144723);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,0.0144723);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,0.01339875);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,0.01498025);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,0.006699373);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,0.007735769);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,0.008205022);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,0.007735769);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,0.003867885);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,0.003867885);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(1354);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,0.03822745);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,0.1989971);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,0.2608041);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,0.2468707);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,0.174703);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,0.1282584);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,0.09217459);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,0.07466856);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,0.05216081);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,0.04001377);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,0.04001377);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,0.03858471);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,0.03322572);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,0.03108213);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,0.0271522);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,0.01964962);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,0.0135761);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,0.01107524);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,0.005716254);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,0.00428719);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,0.002500861);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,0.00428719);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,0.001786329);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,0.001071798);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,0.001429063);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,0.003695587);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,0.008431777);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,0.009652792);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,0.009391404);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,0.007900343);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,0.006769222);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,0.005738539);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,0.005164932);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,0.00431686);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,0.003780946);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,0.003780946);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,0.003712816);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,0.003445347);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,0.003332354);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,0.003114571);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,0.002649554);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,0.002202335);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,0.001989172);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,0.001429063);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,0.001237605);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,0.0009452366);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,0.001237605);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.0007988707);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.0006188026);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(4322);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_tags_16->Modified();
   H_dR_Bj0_tags_16->cd();
   H_dR_Bj0_tags_16->SetSelected(H_dR_Bj0_tags_16);
}
