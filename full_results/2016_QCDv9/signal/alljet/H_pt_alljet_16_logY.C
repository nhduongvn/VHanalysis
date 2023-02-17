#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_alljet_16_logY()
{
//=========Macro generated from canvas: H_pt_alljet_16/H_pt_alljet_16
//=========  (Thu Feb 16 10:37:20 2023) by ROOT version 6.26/06
   TCanvas *H_pt_alljet_16 = new TCanvas("H_pt_alljet_16", "H_pt_alljet_16",0,0,600,600);
   H_pt_alljet_16->SetHighLightColor(2);
   H_pt_alljet_16->Range(37.97653,-0.07519508,1705.96,5.238363);
   H_pt_alljet_16->SetFillColor(0);
   H_pt_alljet_16->SetFillStyle(4000);
   H_pt_alljet_16->SetBorderMode(0);
   H_pt_alljet_16->SetBorderSize(2);
   H_pt_alljet_16->SetLogy();
   H_pt_alljet_16->SetLeftMargin(0.15709);
   H_pt_alljet_16->SetRightMargin(0.1234783);
   H_pt_alljet_16->SetBottomMargin(0.12);
   H_pt_alljet_16->SetFrameFillStyle(1000);
   H_pt_alljet_16->SetFrameBorderMode(0);
   H_pt_alljet_16->SetFrameFillStyle(1000);
   H_pt_alljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(30039.92);
   
   TH1F *st_stack_205 = new TH1F("st_stack_205","",40,0,2000);
   st_stack_205->SetMinimum(3.651168);
   st_stack_205->SetMaximum(50933.88);
   st_stack_205->SetDirectory(0);
   st_stack_205->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_205->SetLineColor(ci);
   st_stack_205->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_205->GetXaxis()->SetRange(7,30);
   st_stack_205->GetXaxis()->SetLabelFont(42);
   st_stack_205->GetXaxis()->SetTitleOffset(1);
   st_stack_205->GetXaxis()->SetTitleFont(42);
   st_stack_205->GetYaxis()->SetTitle("Events/50.0");
   st_stack_205->GetYaxis()->SetLabelFont(42);
   st_stack_205->GetYaxis()->SetTitleSize(0.037);
   st_stack_205->GetYaxis()->SetTitleFont(42);
   st_stack_205->GetZaxis()->SetLabelFont(42);
   st_stack_205->GetZaxis()->SetTitleOffset(1);
   st_stack_205->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_205);
   
   
   TH1D *VbbHcc_alljet_H_pt_stack_1 = new TH1D("VbbHcc_alljet_H_pt_stack_1","",40,0,2000);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(1,300.3992);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(2,252.8791);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(3,58.84202);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(4,13.35677);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(5,4.500398);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(6,1.641442);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(7,0.7673528);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(8,0.3614379);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(9,0.1900995);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(10,0.09133685);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(11,0.04344098);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(12,0.03171682);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(13,0.01226594);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(14,0.009161715);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(15,0.002248697);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(16,0.009019096);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(18,0.002814972);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(1,0.9713702);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(2,0.8836309);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(3,0.4184517);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(4,0.1974012);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(5,0.1140518);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(6,0.0695194);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(7,0.04725707);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(8,0.03220989);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(9,0.0231809);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(10,0.01617446);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(11,0.010901);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(12,0.009306663);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(13,0.006143501);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(14,0.005292486);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(15,0.002248697);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(16,0.005213755);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(18,0.002814972);
   VbbHcc_alljet_H_pt_stack_1->SetEntries(234325);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_pt_stack_1,"");
   
   TH1D *VbbHcc_alljet_H_pt_stack_2 = new TH1D("VbbHcc_alljet_H_pt_stack_2","",40,0,2000);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(1,28.70004);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(2,36.96555);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(3,16.05947);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(4,5.961326);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(5,2.366603);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(6,0.9309117);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(7,0.4042698);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(8,0.1776116);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(9,0.08247227);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(10,0.03217409);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(11,0.01839043);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(12,0.007090031);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(13,0.005669059);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(14,0.0008142203);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(15,0.0002572759);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(16,0.0007016676);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(17,0.0006524614);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(19,0.0003799206);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(1,0.1048657);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(2,0.1189282);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(3,0.07819283);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(4,0.04746925);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(5,0.02986184);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(6,0.01867671);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(7,0.01233435);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(8,0.008088121);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(9,0.005543225);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(10,0.003431632);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(11,0.002634825);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(12,0.001632112);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(13,0.001437588);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(14,0.000576773);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(15,0.0002572759);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(16,0.0004994172);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(17,0.0004718495);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(19,0.0003799206);
   VbbHcc_alljet_H_pt_stack_2->SetEntries(244817);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_H_pt_stack_1","ZHcc","F");

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
   H_pt_alljet_16->Modified();
   H_pt_alljet_16->cd();
   H_pt_alljet_16->SetSelected(H_pt_alljet_16);
}
