void H_pt_tags_17_logY()
{
//=========Macro generated from canvas: H_pt_tags_17/H_pt_tags_17
//=========  (Thu Feb  9 09:44:30 2023) by ROOT version 6.14/09
   TCanvas *H_pt_tags_17 = new TCanvas("H_pt_tags_17", "H_pt_tags_17",0,0,600,600);
   H_pt_tags_17->SetHighLightColor(2);
   H_pt_tags_17->Range(37.97653,0.3582179,1705.96,3.310775);
   H_pt_tags_17->SetFillColor(0);
   H_pt_tags_17->SetFillStyle(4000);
   H_pt_tags_17->SetBorderMode(0);
   H_pt_tags_17->SetBorderSize(2);
   H_pt_tags_17->SetLogy();
   H_pt_tags_17->SetLeftMargin(0.15709);
   H_pt_tags_17->SetRightMargin(0.1234783);
   H_pt_tags_17->SetBottomMargin(0.12);
   H_pt_tags_17->SetFrameFillStyle(1000);
   H_pt_tags_17->SetFrameBorderMode(0);
   H_pt_tags_17->SetFrameFillStyle(1000);
   H_pt_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(753.5023);
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",40,0,2000);
   st_stack_14->SetMinimum(5.158515);
   st_stack_14->SetMaximum(1036.38);
   st_stack_14->SetDirectory(0);
   st_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_14->SetLineColor(ci);
   st_stack_14->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_14->GetXaxis()->SetRange(7,30);
   st_stack_14->GetXaxis()->SetLabelFont(42);
   st_stack_14->GetXaxis()->SetLabelSize(0.035);
   st_stack_14->GetXaxis()->SetTitleSize(0.035);
   st_stack_14->GetXaxis()->SetTitleFont(42);
   st_stack_14->GetYaxis()->SetTitle("Events/50.0");
   st_stack_14->GetYaxis()->SetLabelFont(42);
   st_stack_14->GetYaxis()->SetLabelSize(0.035);
   st_stack_14->GetYaxis()->SetTitleSize(0.037);
   st_stack_14->GetYaxis()->SetTitleOffset(0);
   st_stack_14->GetYaxis()->SetTitleFont(42);
   st_stack_14->GetZaxis()->SetLabelFont(42);
   st_stack_14->GetZaxis()->SetLabelSize(0.035);
   st_stack_14->GetZaxis()->SetTitleSize(0.035);
   st_stack_14->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_14);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,3.398656);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,6.108797);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,3.924794);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,1.988216);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,1.042857);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,0.5230492);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,0.2855402);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,0.1648312);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,0.08931507);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,0.05088769);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,0.03080061);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,0.005809608);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(13,0.0157619);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(14,0.01142046);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(16,0.007733411);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(18,0.002873518);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(19,0.001842579);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(20,0.001227937);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(24,0.002001313);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,0.08052662);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,0.1080884);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,0.08592795);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,0.06105268);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,0.04424702);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,0.03160234);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,0.02292424);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,0.01785849);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,0.01300774);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,0.009483567);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,0.008274127);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,0.003406225);
   VbbHcc_tags_H_pt_stack_1->SetBinError(13,0.005315402);
   VbbHcc_tags_H_pt_stack_1->SetBinError(14,0.004690033);
   VbbHcc_tags_H_pt_stack_1->SetBinError(16,0.003920963);
   VbbHcc_tags_H_pt_stack_1->SetBinError(18,0.002082033);
   VbbHcc_tags_H_pt_stack_1->SetBinError(19,0.001842579);
   VbbHcc_tags_H_pt_stack_1->SetBinError(20,0.001227937);
   VbbHcc_tags_H_pt_stack_1->SetBinError(24,0.002001313);
   VbbHcc_tags_H_pt_stack_1->SetEntries(10244);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_2 = new TH1D("VbbHcc_tags_H_pt_stack_2","",40,0,2000);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,0.6079211);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,1.426225);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,1.480434);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,0.952405);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,0.5043666);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,0.2526405);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,0.1236455);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,0.05516163);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,0.03677788);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,0.01739069);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,0.005287186);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,0.003808734);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,0.0007658153);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(14,0.001072737);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(16,0.0001728116);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(17,0.0002598782);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(19,0.0002398048);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(24,0.0002536154);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,0.01210054);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,0.01855834);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,0.01894071);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,0.01514399);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,0.0110228);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,0.007758716);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,0.005411511);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,0.003618548);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,0.002963581);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,0.002086364);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,0.001101769);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,0.0009407173);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,0.0004488803);
   VbbHcc_tags_H_pt_stack_2->SetBinError(14,0.0004855936);
   VbbHcc_tags_H_pt_stack_2->SetBinError(16,0.0001728116);
   VbbHcc_tags_H_pt_stack_2->SetBinError(17,0.0002598782);
   VbbHcc_tags_H_pt_stack_2->SetBinError(19,0.0002398048);
   VbbHcc_tags_H_pt_stack_2->SetBinError(24,0.0002536154);
   VbbHcc_tags_H_pt_stack_2->SetEntries(23698);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_1","ZHcc","F");

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
   H_pt_tags_17->Modified();
   H_pt_tags_17->cd();
   H_pt_tags_17->SetSelected(H_pt_tags_17);
}
