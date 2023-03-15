#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_algo_17()
{
//=========Macro generated from canvas: H_pt_algo_17/H_pt_algo_17
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *H_pt_algo_17 = new TCanvas("H_pt_algo_17", "H_pt_algo_17",0,0,600,600);
   H_pt_algo_17->SetHighLightColor(2);
   H_pt_algo_17->Range(37.97653,-0.2378342,1705.96,1.744118);
   H_pt_algo_17->SetFillColor(0);
   H_pt_algo_17->SetFillStyle(4000);
   H_pt_algo_17->SetBorderMode(0);
   H_pt_algo_17->SetBorderSize(2);
   H_pt_algo_17->SetLeftMargin(0.15709);
   H_pt_algo_17->SetRightMargin(0.1234783);
   H_pt_algo_17->SetBottomMargin(0.12);
   H_pt_algo_17->SetFrameFillStyle(1000);
   H_pt_algo_17->SetFrameBorderMode(0);
   H_pt_algo_17->SetFrameFillStyle(1000);
   H_pt_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.545922);
   
   TH1F *st_stack_78 = new TH1F("st_stack_78","",40,0,2000);
   st_stack_78->SetMinimum(0);
   st_stack_78->SetMaximum(1.545922);
   st_stack_78->SetDirectory(0);
   st_stack_78->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_78->SetLineColor(ci);
   st_stack_78->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_78->GetXaxis()->SetRange(7,30);
   st_stack_78->GetXaxis()->SetLabelFont(42);
   st_stack_78->GetXaxis()->SetTitleOffset(1);
   st_stack_78->GetXaxis()->SetTitleFont(42);
   st_stack_78->GetYaxis()->SetTitle("Events/50.0");
   st_stack_78->GetYaxis()->SetLabelFont(42);
   st_stack_78->GetYaxis()->SetTitleSize(0.037);
   st_stack_78->GetYaxis()->SetTitleFont(42);
   st_stack_78->GetZaxis()->SetLabelFont(42);
   st_stack_78->GetZaxis()->SetTitleOffset(1);
   st_stack_78->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_78);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,0.1432707);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,1.026581);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,1.030615);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,0.6532737);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(5,0.396172);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(6,0.2033974);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(7,0.1187695);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(8,0.06343697);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(9,0.03468352);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(10,0.01399397);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(11,0.001907215);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(12,0.004056246);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(13,0.004016422);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(14,0.005361586);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,0.01611854);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,0.04464014);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,0.04467006);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,0.03509428);
   VbbHcc_algo_H_pt_stack_1->SetBinError(5,0.02765321);
   VbbHcc_algo_H_pt_stack_1->SetBinError(6,0.01989114);
   VbbHcc_algo_H_pt_stack_1->SetBinError(7,0.01495312);
   VbbHcc_algo_H_pt_stack_1->SetBinError(8,0.01106906);
   VbbHcc_algo_H_pt_stack_1->SetBinError(9,0.008373478);
   VbbHcc_algo_H_pt_stack_1->SetBinError(10,0.0050155);
   VbbHcc_algo_H_pt_stack_1->SetBinError(11,0.001907215);
   VbbHcc_algo_H_pt_stack_1->SetBinError(12,0.00292029);
   VbbHcc_algo_H_pt_stack_1->SetBinError(13,0.002840039);
   VbbHcc_algo_H_pt_stack_1->SetBinError(14,0.003096431);
   VbbHcc_algo_H_pt_stack_1->SetEntries(2177);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_2 = new TH1D("VbbHcc_algo_H_pt_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,0.01709959);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,0.1297696);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,0.3422473);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,0.2801344);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,0.1537148);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,0.06983004);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,0.02746178);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,0.01646783);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,0.006446743);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,0.002002498);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,0.0009641862);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(13,0.0005044512);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,0.002033837);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,0.00562171);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,0.009127931);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,0.008224528);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,0.006124179);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,0.004058416);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,0.00253592);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,0.001973907);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,0.001239756);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,0.0007227428);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,0.0004877896);
   VbbHcc_algo_H_pt_stack_2->SetBinError(13,0.0003569464);
   VbbHcc_algo_H_pt_stack_2->SetEntries(4507);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_1","ZHcc","F");

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
   H_pt_algo_17->Modified();
   H_pt_algo_17->cd();
   H_pt_algo_17->SetSelected(H_pt_algo_17);
}
