#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_both_16_logY()
{
//=========Macro generated from canvas: Z_pt_both_16/Z_pt_both_16
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_both_16 = new TCanvas("Z_pt_both_16", "Z_pt_both_16",0,0,600,600);
   Z_pt_both_16->SetHighLightColor(2);
   Z_pt_both_16->Range(37.97653,-4.453533,1705.96,-0.6073792);
   Z_pt_both_16->SetFillColor(0);
   Z_pt_both_16->SetFillStyle(4000);
   Z_pt_both_16->SetBorderMode(0);
   Z_pt_both_16->SetBorderSize(2);
   Z_pt_both_16->SetLogy();
   Z_pt_both_16->SetLeftMargin(0.15709);
   Z_pt_both_16->SetRightMargin(0.1234783);
   Z_pt_both_16->SetBottomMargin(0.12);
   Z_pt_both_16->SetFrameFillStyle(1000);
   Z_pt_both_16->SetFrameBorderMode(0);
   Z_pt_both_16->SetFrameFillStyle(1000);
   Z_pt_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_137 = new TH1F("st_stack_137","",40,0,2000);
   st_stack_137->SetMinimum(99.20276);
   st_stack_137->SetMaximum(0.1018604);
   st_stack_137->SetDirectory(0);
   st_stack_137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_137->SetLineColor(ci);
   st_stack_137->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_137->GetXaxis()->SetRange(7,30);
   st_stack_137->GetXaxis()->SetLabelFont(42);
   st_stack_137->GetXaxis()->SetTitleOffset(1);
   st_stack_137->GetXaxis()->SetTitleFont(42);
   st_stack_137->GetYaxis()->SetTitle("Event/50.0");
   st_stack_137->GetYaxis()->SetLabelFont(42);
   st_stack_137->GetYaxis()->SetTitleSize(0.037);
   st_stack_137->GetYaxis()->SetTitleFont(42);
   st_stack_137->GetZaxis()->SetLabelFont(42);
   st_stack_137->GetZaxis()->SetTitleOffset(1);
   st_stack_137->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_137);
   
   
   TH1D *VbbHcc_both_Z_pt_stack_1 = new TH1D("VbbHcc_both_Z_pt_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(1,0.2607452);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(2,0.5195307);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(3,0.7002246);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(4,0.5046818);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(5,0.3129845);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(6,0.1939587);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(7,0.1140989);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(8,0.06873616);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(9,0.02341104);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(10,0.008373523);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(11,0.02098582);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(12,0.005757809);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(13,0.00411148);
   VbbHcc_both_Z_pt_stack_1->SetBinError(1,0.02370798);
   VbbHcc_both_Z_pt_stack_1->SetBinError(2,0.03281582);
   VbbHcc_both_Z_pt_stack_1->SetBinError(3,0.03834515);
   VbbHcc_both_Z_pt_stack_1->SetBinError(4,0.0324363);
   VbbHcc_both_Z_pt_stack_1->SetBinError(5,0.02528343);
   VbbHcc_both_Z_pt_stack_1->SetBinError(6,0.02026567);
   VbbHcc_both_Z_pt_stack_1->SetBinError(7,0.01527481);
   VbbHcc_both_Z_pt_stack_1->SetBinError(8,0.01200838);
   VbbHcc_both_Z_pt_stack_1->SetBinError(9,0.006795295);
   VbbHcc_both_Z_pt_stack_1->SetBinError(10,0.004195419);
   VbbHcc_both_Z_pt_stack_1->SetBinError(11,0.006658035);
   VbbHcc_both_Z_pt_stack_1->SetBinError(12,0.003291736);
   VbbHcc_both_Z_pt_stack_1->SetBinError(13,0.002909172);
   VbbHcc_both_Z_pt_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_stack_2 = new TH1D("VbbHcc_both_Z_pt_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(1,0.07565456);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(2,0.1763169);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(3,0.3115871);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(4,0.2521168);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(5,0.1615772);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(6,0.09970252);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(7,0.04497809);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(8,0.02442771);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(9,0.00625998);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(10,0.002686912);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(11,0.0008575174);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(12,0.001292719);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(13,0.0001001888);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(14,0.0002972213);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(15,0.0005325817);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(16,0.0002181175);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(17,0.0002613045);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(19,0.0004580161);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(21,0.0002722436);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(23,0.0002710034);
   VbbHcc_both_Z_pt_stack_2->SetBinError(1,0.004506079);
   VbbHcc_both_Z_pt_stack_2->SetBinError(2,0.006876097);
   VbbHcc_both_Z_pt_stack_2->SetBinError(3,0.009154093);
   VbbHcc_both_Z_pt_stack_2->SetBinError(4,0.008211636);
   VbbHcc_both_Z_pt_stack_2->SetBinError(5,0.006573102);
   VbbHcc_both_Z_pt_stack_2->SetBinError(6,0.005162103);
   VbbHcc_both_Z_pt_stack_2->SetBinError(7,0.003472246);
   VbbHcc_both_Z_pt_stack_2->SetBinError(8,0.002527734);
   VbbHcc_both_Z_pt_stack_2->SetBinError(9,0.001291699);
   VbbHcc_both_Z_pt_stack_2->SetBinError(10,0.0008503472);
   VbbHcc_both_Z_pt_stack_2->SetBinError(11,0.0004955439);
   VbbHcc_both_Z_pt_stack_2->SetBinError(12,0.0005793629);
   VbbHcc_both_Z_pt_stack_2->SetBinError(13,0.0001001888);
   VbbHcc_both_Z_pt_stack_2->SetBinError(14,0.0002972213);
   VbbHcc_both_Z_pt_stack_2->SetBinError(15,0.0003765932);
   VbbHcc_both_Z_pt_stack_2->SetBinError(16,0.0002181175);
   VbbHcc_both_Z_pt_stack_2->SetBinError(17,0.0002613045);
   VbbHcc_both_Z_pt_stack_2->SetBinError(19,0.0003261313);
   VbbHcc_both_Z_pt_stack_2->SetBinError(21,0.0002722436);
   VbbHcc_both_Z_pt_stack_2->SetBinError(23,0.0002710034);
   VbbHcc_both_Z_pt_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_both_16->Modified();
   Z_pt_both_16->cd();
   Z_pt_both_16->SetSelected(Z_pt_both_16);
}
