#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.310117,-0.08817109,7.029799,0.646588);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetFillStyle(4000);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLogy();
   Z_dR_tags_16->SetLeftMargin(0.15709);
   Z_dR_tags_16->SetRightMargin(0.1234783);
   Z_dR_tags_16->SetBottomMargin(0.12);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",30,0,6);
   st_stack_17->SetMinimum(-2.420443e+09);
   st_stack_17->SetMaximum(-0.5745258);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_17->GetXaxis()->SetRange(1,30);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetTitleOffset(1);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Event/0.2");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetTitleSize(0.037);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetTitleOffset(1);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,0.2220752);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,0.373072);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,0.3551071);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,0.2880682);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,0.2486021);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,0.1896863);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,0.1042575);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,0.08932168);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,0.07630561);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,0.1089988);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,0.1162499);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,0.1398021);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,0.1413198);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,0.1429077);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,0.05310092);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,0.0221075);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,0.009145067);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,0.006228348);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,0.00527746);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,0.02150453);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,0.02776157);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,0.02739405);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,0.02451611);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,0.02264883);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,0.01982428);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,0.01520742);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,0.01364446);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,0.01249868);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,0.01499424);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,0.01550701);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,0.0169402);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,0.01728107);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,0.01768956);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,0.01046673);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,0.006695066);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,0.004322585);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,0.003602916);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,0.003068016);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(1354);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,0.000263462);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,0.08115324);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,0.1727491);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,0.1830326);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,0.1511449);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,0.09453887);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,0.05103205);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,0.04242193);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,0.03701096);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,0.03258989);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,0.03537261);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,0.04435496);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,0.05371256);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,0.05346019);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,0.05337323);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,0.02714448);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,0.009128656);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,0.006795566);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,0.003492256);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,0.002211825);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,0.001450865);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,0.0002672233);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,0.0002593134);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,0.0004905543);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.000263462);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,0.004653239);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,0.006794536);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,0.007019595);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,0.006384946);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,0.005045609);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,0.003693176);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,0.003378111);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,0.00312774);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,0.002929168);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,0.003079384);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,0.003454133);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,0.003797852);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,0.003799009);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,0.003796189);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,0.002688827);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,0.001529194);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,0.001328695);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,0.00096951);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,0.0007509778);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,0.0006129208);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,0.0002672233);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,0.0002593134);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,0.0003476981);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(4322);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}
