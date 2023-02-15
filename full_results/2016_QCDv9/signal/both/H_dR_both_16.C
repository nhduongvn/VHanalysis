#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Tue Feb 14 15:57:10 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.353788,-0.2676263,7.264125,1.962593);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetFillStyle(4000);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15709);
   H_dR_both_16->SetRightMargin(0.1234783);
   H_dR_both_16->SetBottomMargin(0.12);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.739571);
   
   TH1F *st_stack_149 = new TH1F("st_stack_149","",30,0,6);
   st_stack_149->SetMinimum(0);
   st_stack_149->SetMaximum(1.739571);
   st_stack_149->SetDirectory(0);
   st_stack_149->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_149->SetLineColor(ci);
   st_stack_149->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_149->GetXaxis()->SetRange(1,31);
   st_stack_149->GetXaxis()->SetLabelFont(42);
   st_stack_149->GetXaxis()->SetTitleOffset(1);
   st_stack_149->GetXaxis()->SetTitleFont(42);
   st_stack_149->GetYaxis()->SetTitle("Events/0.2");
   st_stack_149->GetYaxis()->SetLabelFont(42);
   st_stack_149->GetYaxis()->SetTitleSize(0.037);
   st_stack_149->GetYaxis()->SetTitleFont(42);
   st_stack_149->GetZaxis()->SetLabelFont(42);
   st_stack_149->GetZaxis()->SetTitleOffset(1);
   st_stack_149->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_149);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,0.235788);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,0.3962396);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,0.5405852);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,0.70101);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,0.7607971);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,0.8481864);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,0.8842538);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,0.8348439);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,0.8015074);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,0.7309062);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,0.8553166);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,0.7679067);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,0.8866319);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,0.8821465);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,0.3533994);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,0.2156485);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,0.09702507);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,0.08055997);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,0.04634161);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,0.03142364);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,0.02660155);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,0.005779801);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,0.009069432);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,0.002891781);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,0.002700465);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,0.02646351);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,0.03432316);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,0.03983005);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,0.04592918);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,0.04766284);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,0.05054814);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,0.05168869);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,0.05057608);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,0.04890964);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,0.04649641);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,0.05118102);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,0.04741717);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,0.05192145);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,0.05116832);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,0.03283884);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,0.02511437);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,0.01655388);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,0.01518694);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,0.01160623);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,0.009497986);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,0.008851357);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,0.004087632);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,0.005241691);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,0.002891781);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,0.002700465);
   VbbHcc_both_H_dR_stack_1->SetEntries(3861);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,0.06641465);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,0.1296142);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,0.1934267);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,0.2658933);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,0.3295538);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,0.3059196);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,0.2754603);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,0.2469258);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,0.2047798);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,0.2163336);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,0.2080143);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,0.2116016);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,0.2314883);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,0.2302934);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,0.1119762);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,0.07392132);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,0.05493679);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,0.03331065);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,0.02760921);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,0.01190967);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,0.008986999);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,0.006131963);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,0.004441235);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.002207068);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.0007055996);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,0.0006533194);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,0.005003793);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,0.00703158);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,0.008585505);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,0.01009638);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,0.01123582);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,0.01083097);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,0.01028986);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,0.009741565);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,0.008856415);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,0.009088379);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,0.008925414);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,0.00898571);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,0.009416387);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,0.009344678);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,0.006532004);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,0.005324745);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,0.004573962);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,0.003530492);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,0.003243665);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.002096256);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.001836166);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.001463008);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.001288035);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.0009023189);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.0004989767);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.0004620019);
   VbbHcc_both_H_dR_stack_2->SetEntries(9203);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","ZHcc","F");

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
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
