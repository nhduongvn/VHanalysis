#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_17()
{
//=========Macro generated from canvas: H_pt_both_17/H_pt_both_17
//=========  (Wed Jan 18 11:40:24 2023) by ROOT version 6.26/06
   TCanvas *H_pt_both_17 = new TCanvas("H_pt_both_17", "H_pt_both_17",0,0,600,600);
   H_pt_both_17->SetHighLightColor(2);
   H_pt_both_17->Range(37.97653,-0.9035001,1705.96,6.625667);
   H_pt_both_17->SetFillColor(0);
   H_pt_both_17->SetFillStyle(4000);
   H_pt_both_17->SetBorderMode(0);
   H_pt_both_17->SetBorderSize(2);
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
   st->SetMaximum(5.872751);
   
   TH1F *st_stack_142 = new TH1F("st_stack_142","",40,0,2000);
   st_stack_142->SetMinimum(0);
   st_stack_142->SetMaximum(5.872751);
   st_stack_142->SetDirectory(0);
   st_stack_142->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_142->SetLineColor(ci);
   st_stack_142->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_142->GetXaxis()->SetRange(7,30);
   st_stack_142->GetXaxis()->SetLabelFont(42);
   st_stack_142->GetXaxis()->SetTitleOffset(1);
   st_stack_142->GetXaxis()->SetTitleFont(42);
   st_stack_142->GetYaxis()->SetTitle("Events/50.0");
   st_stack_142->GetYaxis()->SetLabelFont(42);
   st_stack_142->GetYaxis()->SetTitleSize(0.037);
   st_stack_142->GetYaxis()->SetTitleFont(42);
   st_stack_142->GetZaxis()->SetLabelFont(42);
   st_stack_142->GetZaxis()->SetTitleOffset(1);
   st_stack_142->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_142);
   
   
   TH1D *VbbHcc_both_H_pt_stack_1 = new TH1D("VbbHcc_both_H_pt_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_stack_1->SetBinContent(1,2.327446);
   VbbHcc_both_H_pt_stack_1->SetBinContent(2,3.915167);
   VbbHcc_both_H_pt_stack_1->SetBinContent(3,2.384043);
   VbbHcc_both_H_pt_stack_1->SetBinContent(4,1.252406);
   VbbHcc_both_H_pt_stack_1->SetBinContent(5,0.5006508);
   VbbHcc_both_H_pt_stack_1->SetBinContent(6,0.267174);
   VbbHcc_both_H_pt_stack_1->SetBinContent(7,0.123946);
   VbbHcc_both_H_pt_stack_1->SetBinContent(8,0.094957);
   VbbHcc_both_H_pt_stack_1->SetBinContent(9,0.06670819);
   VbbHcc_both_H_pt_stack_1->SetBinContent(10,0.02291214);
   VbbHcc_both_H_pt_stack_1->SetBinContent(11,0.01845527);
   VbbHcc_both_H_pt_stack_1->SetBinContent(12,0.01016545);
   VbbHcc_both_H_pt_stack_1->SetBinContent(13,0.001789968);
   VbbHcc_both_H_pt_stack_1->SetBinContent(14,0.003007753);
   VbbHcc_both_H_pt_stack_1->SetBinContent(15,0.001259297);
   VbbHcc_both_H_pt_stack_1->SetBinContent(16,0.002984785);
   VbbHcc_both_H_pt_stack_1->SetBinContent(21,0.001251058);
   VbbHcc_both_H_pt_stack_1->SetBinContent(22,0.001646926);
   VbbHcc_both_H_pt_stack_1->SetBinError(1,0.06558251);
   VbbHcc_both_H_pt_stack_1->SetBinError(2,0.08450135);
   VbbHcc_both_H_pt_stack_1->SetBinError(3,0.06590273);
   VbbHcc_both_H_pt_stack_1->SetBinError(4,0.04751981);
   VbbHcc_both_H_pt_stack_1->SetBinError(5,0.02970812);
   VbbHcc_both_H_pt_stack_1->SetBinError(6,0.0221341);
   VbbHcc_both_H_pt_stack_1->SetBinError(7,0.01491601);
   VbbHcc_both_H_pt_stack_1->SetBinError(8,0.0130769);
   VbbHcc_both_H_pt_stack_1->SetBinError(9,0.01118727);
   VbbHcc_both_H_pt_stack_1->SetBinError(10,0.006240403);
   VbbHcc_both_H_pt_stack_1->SetBinError(11,0.005607351);
   VbbHcc_both_H_pt_stack_1->SetBinError(12,0.003982775);
   VbbHcc_both_H_pt_stack_1->SetBinError(13,0.001789968);
   VbbHcc_both_H_pt_stack_1->SetBinError(14,0.00212737);
   VbbHcc_both_H_pt_stack_1->SetBinError(15,0.001259297);
   VbbHcc_both_H_pt_stack_1->SetBinError(16,0.002136547);
   VbbHcc_both_H_pt_stack_1->SetBinError(21,0.001251058);
   VbbHcc_both_H_pt_stack_1->SetBinError(22,0.001646926);
   VbbHcc_both_H_pt_stack_1->SetEntries(7351);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_1,"");
   
   TH1D *VbbHcc_both_H_pt_stack_2 = new TH1D("VbbHcc_both_H_pt_stack_2","",40,0,2000);
   VbbHcc_both_H_pt_stack_2->SetBinContent(1,0.3644547);
   VbbHcc_both_H_pt_stack_2->SetBinContent(2,0.8148195);
   VbbHcc_both_H_pt_stack_2->SetBinContent(3,0.8448699);
   VbbHcc_both_H_pt_stack_2->SetBinContent(4,0.5614871);
   VbbHcc_both_H_pt_stack_2->SetBinContent(5,0.2797564);
   VbbHcc_both_H_pt_stack_2->SetBinContent(6,0.126819);
   VbbHcc_both_H_pt_stack_2->SetBinContent(7,0.07580234);
   VbbHcc_both_H_pt_stack_2->SetBinContent(8,0.03750521);
   VbbHcc_both_H_pt_stack_2->SetBinContent(9,0.01496615);
   VbbHcc_both_H_pt_stack_2->SetBinContent(10,0.009215265);
   VbbHcc_both_H_pt_stack_2->SetBinContent(11,0.003586855);
   VbbHcc_both_H_pt_stack_2->SetBinContent(12,0.003806302);
   VbbHcc_both_H_pt_stack_2->SetBinContent(13,0.001486808);
   VbbHcc_both_H_pt_stack_2->SetBinContent(14,0.001264675);
   VbbHcc_both_H_pt_stack_2->SetBinContent(15,0.0004448232);
   VbbHcc_both_H_pt_stack_2->SetBinContent(16,0.0002504314);
   VbbHcc_both_H_pt_stack_2->SetBinContent(17,0.0001883914);
   VbbHcc_both_H_pt_stack_2->SetBinError(1,0.009424503);
   VbbHcc_both_H_pt_stack_2->SetBinError(2,0.0141485);
   VbbHcc_both_H_pt_stack_2->SetBinError(3,0.01437195);
   VbbHcc_both_H_pt_stack_2->SetBinError(4,0.01173013);
   VbbHcc_both_H_pt_stack_2->SetBinError(5,0.008239818);
   VbbHcc_both_H_pt_stack_2->SetBinError(6,0.005562683);
   VbbHcc_both_H_pt_stack_2->SetBinError(7,0.004236937);
   VbbHcc_both_H_pt_stack_2->SetBinError(8,0.003035248);
   VbbHcc_both_H_pt_stack_2->SetBinError(9,0.001848259);
   VbbHcc_both_H_pt_stack_2->SetBinError(10,0.001520117);
   VbbHcc_both_H_pt_stack_2->SetBinError(11,0.0008938586);
   VbbHcc_both_H_pt_stack_2->SetBinError(12,0.0009708577);
   VbbHcc_both_H_pt_stack_2->SetBinError(13,0.0006090731);
   VbbHcc_both_H_pt_stack_2->SetBinError(14,0.0005692945);
   VbbHcc_both_H_pt_stack_2->SetBinError(15,0.0002727806);
   VbbHcc_both_H_pt_stack_2->SetBinError(16,0.0002300917);
   VbbHcc_both_H_pt_stack_2->SetBinError(17,0.0001883914);
   VbbHcc_both_H_pt_stack_2->SetEntries(14825);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
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
