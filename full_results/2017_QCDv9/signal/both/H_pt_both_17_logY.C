void H_pt_both_17_logY()
{
//=========Macro generated from canvas: H_pt_both_17/H_pt_both_17
//=========  (Thu Feb  9 09:44:34 2023) by ROOT version 6.14/09
   TCanvas *H_pt_both_17 = new TCanvas("H_pt_both_17", "H_pt_both_17",0,0,600,600);
   H_pt_both_17->SetHighLightColor(2);
   H_pt_both_17->Range(37.97653,0.3558789,1705.96,3.320475);
   H_pt_both_17->SetFillColor(0);
   H_pt_both_17->SetFillStyle(4000);
   H_pt_both_17->SetBorderMode(0);
   H_pt_both_17->SetBorderSize(2);
   H_pt_both_17->SetLogy();
   H_pt_both_17->SetLeftMargin(0.15709);
   H_pt_both_17->SetRightMargin(0.1234783);
   H_pt_both_17->SetBottomMargin(0.12);
   H_pt_both_17->SetFrameFillStyle(1000);
   H_pt_both_17->SetFrameBorderMode(0);
   H_pt_both_17->SetFrameFillStyle(1000);
   H_pt_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(767.4967);
   
   TH1F *st_stack_142 = new TH1F("st_stack_142","",40,0,2000);
   st_stack_142->SetMinimum(5.147904);
   st_stack_142->SetMaximum(1056.855);
   st_stack_142->SetDirectory(0);
   st_stack_142->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_142->SetLineColor(ci);
   st_stack_142->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_142->GetXaxis()->SetRange(7,30);
   st_stack_142->GetXaxis()->SetLabelFont(42);
   st_stack_142->GetXaxis()->SetLabelSize(0.035);
   st_stack_142->GetXaxis()->SetTitleSize(0.035);
   st_stack_142->GetXaxis()->SetTitleFont(42);
   st_stack_142->GetYaxis()->SetTitle("Events/50.0");
   st_stack_142->GetYaxis()->SetLabelFont(42);
   st_stack_142->GetYaxis()->SetLabelSize(0.035);
   st_stack_142->GetYaxis()->SetTitleSize(0.037);
   st_stack_142->GetYaxis()->SetTitleOffset(0);
   st_stack_142->GetYaxis()->SetTitleFont(42);
   st_stack_142->GetZaxis()->SetLabelFont(42);
   st_stack_142->GetZaxis()->SetLabelSize(0.035);
   st_stack_142->GetZaxis()->SetTitleSize(0.035);
   st_stack_142->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_142);
   
   
   TH1D *VbbHcc_both_H_pt_stack_1 = new TH1D("VbbHcc_both_H_pt_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_stack_1->SetBinContent(1,3.450553);
   VbbHcc_both_H_pt_stack_1->SetBinContent(2,6.211945);
   VbbHcc_both_H_pt_stack_1->SetBinContent(3,4.03049);
   VbbHcc_both_H_pt_stack_1->SetBinContent(4,2.063848);
   VbbHcc_both_H_pt_stack_1->SetBinContent(5,1.089357);
   VbbHcc_both_H_pt_stack_1->SetBinContent(6,0.545029);
   VbbHcc_both_H_pt_stack_1->SetBinContent(7,0.2982101);
   VbbHcc_both_H_pt_stack_1->SetBinContent(8,0.1649051);
   VbbHcc_both_H_pt_stack_1->SetBinContent(9,0.09452511);
   VbbHcc_both_H_pt_stack_1->SetBinContent(10,0.05711532);
   VbbHcc_both_H_pt_stack_1->SetBinContent(11,0.03273524);
   VbbHcc_both_H_pt_stack_1->SetBinContent(12,0.007823623);
   VbbHcc_both_H_pt_stack_1->SetBinContent(13,0.0157619);
   VbbHcc_both_H_pt_stack_1->SetBinContent(14,0.01142046);
   VbbHcc_both_H_pt_stack_1->SetBinContent(15,0.001998531);
   VbbHcc_both_H_pt_stack_1->SetBinContent(16,0.007733411);
   VbbHcc_both_H_pt_stack_1->SetBinContent(18,0.002873518);
   VbbHcc_both_H_pt_stack_1->SetBinContent(19,0.001842579);
   VbbHcc_both_H_pt_stack_1->SetBinContent(20,0.001227937);
   VbbHcc_both_H_pt_stack_1->SetBinContent(24,0.002001313);
   VbbHcc_both_H_pt_stack_1->SetBinError(1,0.08109172);
   VbbHcc_both_H_pt_stack_1->SetBinError(2,0.1089363);
   VbbHcc_both_H_pt_stack_1->SetBinError(3,0.08710165);
   VbbHcc_both_H_pt_stack_1->SetBinError(4,0.06216497);
   VbbHcc_both_H_pt_stack_1->SetBinError(5,0.04525422);
   VbbHcc_both_H_pt_stack_1->SetBinError(6,0.03224154);
   VbbHcc_both_H_pt_stack_1->SetBinError(7,0.02339187);
   VbbHcc_both_H_pt_stack_1->SetBinError(8,0.0178659);
   VbbHcc_both_H_pt_stack_1->SetBinError(9,0.01335587);
   VbbHcc_both_H_pt_stack_1->SetBinError(10,0.01015189);
   VbbHcc_both_H_pt_stack_1->SetBinError(11,0.008497294);
   VbbHcc_both_H_pt_stack_1->SetBinError(12,0.003957098);
   VbbHcc_both_H_pt_stack_1->SetBinError(13,0.005315402);
   VbbHcc_both_H_pt_stack_1->SetBinError(14,0.004690033);
   VbbHcc_both_H_pt_stack_1->SetBinError(15,0.001998531);
   VbbHcc_both_H_pt_stack_1->SetBinError(16,0.003920963);
   VbbHcc_both_H_pt_stack_1->SetBinError(18,0.002082033);
   VbbHcc_both_H_pt_stack_1->SetBinError(19,0.001842579);
   VbbHcc_both_H_pt_stack_1->SetBinError(20,0.001227937);
   VbbHcc_both_H_pt_stack_1->SetBinError(24,0.002001313);
   VbbHcc_both_H_pt_stack_1->SetEntries(10491);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_1,"");
   
   TH1D *VbbHcc_both_H_pt_stack_2 = new TH1D("VbbHcc_both_H_pt_stack_2","",40,0,2000);
   VbbHcc_both_H_pt_stack_2->SetBinContent(1,0.6223316);
   VbbHcc_both_H_pt_stack_2->SetBinContent(2,1.463022);
   VbbHcc_both_H_pt_stack_2->SetBinContent(3,1.521734);
   VbbHcc_both_H_pt_stack_2->SetBinContent(4,0.9900395);
   VbbHcc_both_H_pt_stack_2->SetBinContent(5,0.5219756);
   VbbHcc_both_H_pt_stack_2->SetBinContent(6,0.2653787);
   VbbHcc_both_H_pt_stack_2->SetBinContent(7,0.1295836);
   VbbHcc_both_H_pt_stack_2->SetBinContent(8,0.05815334);
   VbbHcc_both_H_pt_stack_2->SetBinContent(9,0.03817198);
   VbbHcc_both_H_pt_stack_2->SetBinContent(10,0.01834937);
   VbbHcc_both_H_pt_stack_2->SetBinContent(11,0.005878546);
   VbbHcc_both_H_pt_stack_2->SetBinContent(12,0.004258214);
   VbbHcc_both_H_pt_stack_2->SetBinContent(13,0.0007658153);
   VbbHcc_both_H_pt_stack_2->SetBinContent(14,0.001072737);
   VbbHcc_both_H_pt_stack_2->SetBinContent(16,0.0001728116);
   VbbHcc_both_H_pt_stack_2->SetBinContent(17,0.0002598782);
   VbbHcc_both_H_pt_stack_2->SetBinContent(19,0.0002398048);
   VbbHcc_both_H_pt_stack_2->SetBinContent(23,0.0002225569);
   VbbHcc_both_H_pt_stack_2->SetBinContent(24,0.0002536154);
   VbbHcc_both_H_pt_stack_2->SetBinError(1,0.0122468);
   VbbHcc_both_H_pt_stack_2->SetBinError(2,0.01879705);
   VbbHcc_both_H_pt_stack_2->SetBinError(3,0.01919878);
   VbbHcc_both_H_pt_stack_2->SetBinError(4,0.01543586);
   VbbHcc_both_H_pt_stack_2->SetBinError(5,0.01120687);
   VbbHcc_both_H_pt_stack_2->SetBinError(6,0.007957483);
   VbbHcc_both_H_pt_stack_2->SetBinError(7,0.005541913);
   VbbHcc_both_H_pt_stack_2->SetBinError(8,0.00372158);
   VbbHcc_both_H_pt_stack_2->SetBinError(9,0.0030182);
   VbbHcc_both_H_pt_stack_2->SetBinError(10,0.002142178);
   VbbHcc_both_H_pt_stack_2->SetBinError(11,0.001175215);
   VbbHcc_both_H_pt_stack_2->SetBinError(12,0.0009942671);
   VbbHcc_both_H_pt_stack_2->SetBinError(13,0.0004488803);
   VbbHcc_both_H_pt_stack_2->SetBinError(14,0.0004855936);
   VbbHcc_both_H_pt_stack_2->SetBinError(16,0.0001728116);
   VbbHcc_both_H_pt_stack_2->SetBinError(17,0.0002598782);
   VbbHcc_both_H_pt_stack_2->SetBinError(19,0.0002398048);
   VbbHcc_both_H_pt_stack_2->SetBinError(23,0.0002225569);
   VbbHcc_both_H_pt_stack_2->SetBinError(24,0.0002536154);
   VbbHcc_both_H_pt_stack_2->SetEntries(24456);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_pt_stack_1","ZHcc","F");

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
   H_pt_both_17->Modified();
   H_pt_both_17->cd();
   H_pt_both_17->SetSelected(H_pt_both_17);
}
