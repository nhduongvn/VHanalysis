#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_16_logY()
{
//=========Macro generated from canvas: H_pt_tags_16/H_pt_tags_16
//=========  (Fri Mar 10 11:27:12 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_16 = new TCanvas("H_pt_tags_16", "H_pt_tags_16",0,0,600,600);
   H_pt_tags_16->SetHighLightColor(2);
   H_pt_tags_16->Range(37.97653,-0.383995,1705.96,1.295007);
   H_pt_tags_16->SetFillColor(0);
   H_pt_tags_16->SetFillStyle(4000);
   H_pt_tags_16->SetBorderMode(0);
   H_pt_tags_16->SetBorderSize(2);
   H_pt_tags_16->SetLogy();
   H_pt_tags_16->SetLeftMargin(0.15709);
   H_pt_tags_16->SetRightMargin(0.1234783);
   H_pt_tags_16->SetBottomMargin(0.12);
   H_pt_tags_16->SetFrameFillStyle(1000);
   H_pt_tags_16->SetFrameBorderMode(0);
   H_pt_tags_16->SetFrameFillStyle(1000);
   H_pt_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(11.08413);
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",40,0,2000);
   st_stack_13->SetMinimum(0.6568788);
   st_stack_13->SetMaximum(13.40006);
   st_stack_13->SetDirectory(0);
   st_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_13->SetLineColor(ci);
   st_stack_13->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_13->GetXaxis()->SetRange(7,30);
   st_stack_13->GetXaxis()->SetLabelFont(42);
   st_stack_13->GetXaxis()->SetTitleOffset(1);
   st_stack_13->GetXaxis()->SetTitleFont(42);
   st_stack_13->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_13->GetYaxis()->SetLabelFont(42);
   st_stack_13->GetYaxis()->SetTitleSize(0.037);
   st_stack_13->GetYaxis()->SetTitleFont(42);
   st_stack_13->GetZaxis()->SetLabelFont(42);
   st_stack_13->GetZaxis()->SetTitleOffset(1);
   st_stack_13->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_13);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,4.903192);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,9.19983);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,8.70855);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,5.032003);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,2.917403);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,1.624435);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,0.9784971);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,0.4982365);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,0.3288889);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,0.1706397);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,0.08491491);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,0.04939767);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(13,0.03241979);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(14,0.02387744);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(15,0.01586846);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(16,0.00827764);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(19,0.003064584);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(20,0.003280002);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(21,0.001874444);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(23,0.002930821);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,0.1214853);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,0.166147);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,0.1607256);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,0.1224115);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,0.09351287);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,0.07002886);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,0.05435844);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,0.03878763);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,0.03147785);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,0.02325642);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,0.01560468);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,0.01204558);
   VbbHcc_tags_H_pt_stack_1->SetBinError(13,0.01080531);
   VbbHcc_tags_H_pt_stack_1->SetBinError(14,0.008456829);
   VbbHcc_tags_H_pt_stack_1->SetBinError(15,0.006576401);
   VbbHcc_tags_H_pt_stack_1->SetBinError(16,0.004791759);
   VbbHcc_tags_H_pt_stack_1->SetBinError(19,0.003064584);
   VbbHcc_tags_H_pt_stack_1->SetBinError(20,0.003280002);
   VbbHcc_tags_H_pt_stack_1->SetBinError(21,0.001874444);
   VbbHcc_tags_H_pt_stack_1->SetBinError(23,0.002930821);
   VbbHcc_tags_H_pt_stack_1->SetEntries(12307);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_pt_stack_1->SetFillColor(ci);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_2 = new TH1D("VbbHcc_tags_H_pt_stack_2","",40,0,2000);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,1.512498);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,3.010397);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,3.499622);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,2.582651);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,1.475948);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,0.7721647);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,0.403371);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,0.1964573);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,0.1057258);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,0.04857547);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,0.02857947);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,0.01205899);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,0.00646635);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(14,0.002745244);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(15,0.003151822);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(16,0.001450688);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(17,0.0003834218);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(19,0.000757931);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,0.02402139);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,0.03389079);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,0.03653641);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,0.03138539);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,0.02371487);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,0.01716048);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,0.01236419);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,0.008639021);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,0.006318114);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,0.004275809);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,0.00327806);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,0.00214322);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,0.001549103);
   VbbHcc_tags_H_pt_stack_2->SetBinError(14,0.001039883);
   VbbHcc_tags_H_pt_stack_2->SetBinError(15,0.001116614);
   VbbHcc_tags_H_pt_stack_2->SetBinError(16,0.0007266233);
   VbbHcc_tags_H_pt_stack_2->SetBinError(17,0.0003834218);
   VbbHcc_tags_H_pt_stack_2->SetBinError(19,0.0005360769);
   VbbHcc_tags_H_pt_stack_2->SetEntries(36553);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_pt_stack_2->SetFillColor(ci);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
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
   entry->SetLineColor(1);
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
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_16->Modified();
   H_pt_tags_16->cd();
   H_pt_tags_16->SetSelected(H_pt_tags_16);
}
