#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(-1.310117,-0.06530004,7.029799,0.478867);
   H_dR_algo_17->SetFillColor(0);
   H_dR_algo_17->SetFillStyle(4000);
   H_dR_algo_17->SetBorderMode(0);
   H_dR_algo_17->SetBorderSize(2);
   H_dR_algo_17->SetLogy();
   H_dR_algo_17->SetLeftMargin(0.15709);
   H_dR_algo_17->SetRightMargin(0.1234783);
   H_dR_algo_17->SetBottomMargin(0.12);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(40.42383);
   
   TH1F *st_stack_78 = new TH1F("st_stack_78","",30,0,6);
   st_stack_78->SetMinimum(-3.128244e+09);
   st_stack_78->SetMaximum(-27.43454);
   st_stack_78->SetDirectory(0);
   st_stack_78->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_78->SetLineColor(ci);
   st_stack_78->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_78->GetXaxis()->SetRange(1,31);
   st_stack_78->GetXaxis()->SetLabelFont(42);
   st_stack_78->GetXaxis()->SetTitleOffset(1);
   st_stack_78->GetXaxis()->SetTitleFont(42);
   st_stack_78->GetYaxis()->SetTitle("Events/0.2");
   st_stack_78->GetYaxis()->SetLabelFont(42);
   st_stack_78->GetYaxis()->SetTitleSize(0.037);
   st_stack_78->GetYaxis()->SetTitleFont(42);
   st_stack_78->GetZaxis()->SetLabelFont(42);
   st_stack_78->GetZaxis()->SetTitleOffset(1);
   st_stack_78->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_78);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.02597146);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.1089384);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.08885417);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.1482764);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.2835848);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.264458);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.3126419);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.2944513);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.2498966);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.1567086);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.1390464);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.1213363);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.09244723);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.05603769);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.01873479);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.01477684);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,0.003774817);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,0.003046048);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,0.002029697);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.007104444);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.0139863);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.01233787);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.01656889);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.02297391);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.02199077);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.024208);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.02343184);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.02149589);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.01760902);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.01636505);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.01456114);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.01302025);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.01013583);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.00557728);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.004987381);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,0.002663385);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,0.002165072);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,0.002029697);
   VbbHcc_algo_H_dR_stack_1->SetEntries(1606);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.005900078);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.02067554);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.03131441);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.06182626);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.09328993);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.09747961);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.09159644);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.05930053);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.04445535);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.02692625);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.02424078);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.01509186);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.01586621);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.01483306);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.006660499);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.003175839);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.002160193);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,0.0009348097);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,0.0009878508);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.0005966878);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.001231084);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.002235461);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.002760757);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.003875669);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.004804735);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.004902484);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.004739582);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.003801074);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.003292615);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.00255654);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.002425091);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.001906189);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.001947546);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.001922044);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.001265476);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.0008609545);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.0007190525);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,0.0004718692);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,0.0005013853);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.0003725873);
   VbbHcc_algo_H_dR_stack_2->SetEntries(2897);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_17->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->SetSelected(H_dR_algo_17);
}
