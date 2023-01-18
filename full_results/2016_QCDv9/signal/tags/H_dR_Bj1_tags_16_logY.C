#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_16/H_dR_Bj1_tags_16
//=========  (Wed Jan 18 11:42:13 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_16 = new TCanvas("H_dR_Bj1_tags_16", "H_dR_Bj1_tags_16",0,0,600,600);
   H_dR_Bj1_tags_16->SetHighLightColor(2);
   H_dR_Bj1_tags_16->Range(-1.310117,0.6019553,7.029799,2.347523);
   H_dR_Bj1_tags_16->SetFillColor(0);
   H_dR_Bj1_tags_16->SetFillStyle(4000);
   H_dR_Bj1_tags_16->SetBorderMode(0);
   H_dR_Bj1_tags_16->SetBorderSize(2);
   H_dR_Bj1_tags_16->SetLogy();
   H_dR_Bj1_tags_16->SetLeftMargin(0.15709);
   H_dR_Bj1_tags_16->SetRightMargin(0.1234783);
   H_dR_Bj1_tags_16->SetBottomMargin(0.12);
   H_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
   H_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(122.32);
   
   TH1F *st_stack_45 = new TH1F("st_stack_45","",30,0,6);
   st_stack_45->SetMinimum(6.477738);
   st_stack_45->SetMaximum(148.9245);
   st_stack_45->SetDirectory(0);
   st_stack_45->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_45->SetLineColor(ci);
   st_stack_45->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_45->GetXaxis()->SetRange(1,30);
   st_stack_45->GetXaxis()->SetLabelFont(42);
   st_stack_45->GetXaxis()->SetTitleOffset(1);
   st_stack_45->GetXaxis()->SetTitleFont(42);
   st_stack_45->GetYaxis()->SetTitle("Events/0.2");
   st_stack_45->GetYaxis()->SetLabelFont(42);
   st_stack_45->GetYaxis()->SetTitleSize(0.037);
   st_stack_45->GetYaxis()->SetTitleFont(42);
   st_stack_45->GetZaxis()->SetLabelFont(42);
   st_stack_45->GetZaxis()->SetTitleOffset(1);
   st_stack_45->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_45);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,0.1800808);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,0.6598159);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,0.8658283);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,0.8658283);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,0.7174418);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,0.582021);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,0.4768539);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,0.42355);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,0.2924512);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,0.2636382);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,0.2189782);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,0.1988092);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,0.1944872);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,0.1757588);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,0.1368614);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,0.138302);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,0.08355748);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,0.04610068);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,0.03025357);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,0.01440646);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,0.01440646);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,0.004321938);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,0.004321938);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,0.005762585);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,0.002881292);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,0.001440646);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(28,0.001440646);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,0.01610691);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,0.03083117);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,0.03531787);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,0.03531787);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,0.03214933);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,0.02895663);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,0.02621026);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,0.02470194);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,0.02052605);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,0.0194887);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,0.01776148);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,0.01692376);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,0.0167388);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,0.01591246);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,0.01404168);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,0.01411539);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,0.01097163);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,0.008149525);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,0.00660187);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,0.004555723);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,0.004555723);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,0.002495272);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,0.002495272);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,0.002881292);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,0.002037381);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,0.001440646);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(28,0.001440646);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(4581);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,0.1010002);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,0.3058811);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,0.3573714);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,0.3064212);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,0.2464692);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,0.1994798);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,0.1535707);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,0.120084);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,0.1019003);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,0.08209639);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,0.07345467);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,0.0685937);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,0.05563111);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,0.0570714);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,0.05167032);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,0.04734946);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,0.02574514);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,0.01584316);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,0.01170234);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,0.006121222);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,0.003600719);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,0.002880575);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,0.003960791);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,0.00180036);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,0.0009001798);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,0.0007201438);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,0.0003600719);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,0.00426423);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,0.007420889);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,0.008021203);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,0.007427438);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,0.00666133);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,0.005992791);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,0.005258159);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,0.00464967);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,0.004283191);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,0.003844516);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,0.003636548);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,0.003514162);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,0.003164743);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,0.003205449);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,0.003050002);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,0.002919692);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,0.002152917);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,0.001688887);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,0.001451496);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,0.001049781);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,0.0008051453);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,0.0007201438);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.0008444435);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.0005693237);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.0004025726);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.0003600719);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.0002546093);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(13340);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_1","ZHcc","F");

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
   H_dR_Bj1_tags_16->Modified();
   H_dR_Bj1_tags_16->cd();
   H_dR_Bj1_tags_16->SetSelected(H_dR_Bj1_tags_16);
}
