#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_18_logY()
{
//=========Macro generated from canvas: H_pt_tags_18/H_pt_tags_18
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_18 = new TCanvas("H_pt_tags_18", "H_pt_tags_18",0,0,600,600);
   H_pt_tags_18->SetHighLightColor(2);
   H_pt_tags_18->Range(37.97653,-4.142257,1705.96,-0.2961031);
   H_pt_tags_18->SetFillColor(0);
   H_pt_tags_18->SetFillStyle(4000);
   H_pt_tags_18->SetBorderMode(0);
   H_pt_tags_18->SetBorderSize(2);
   H_pt_tags_18->SetLogy();
   H_pt_tags_18->SetLeftMargin(0.15709);
   H_pt_tags_18->SetRightMargin(0.1234783);
   H_pt_tags_18->SetBottomMargin(0.12);
   H_pt_tags_18->SetFrameFillStyle(1000);
   H_pt_tags_18->SetFrameBorderMode(0);
   H_pt_tags_18->SetFrameFillStyle(1000);
   H_pt_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_15 = new TH1F("st_stack_15","",40,0,2000);
   st_stack_15->SetMinimum(41.92507);
   st_stack_15->SetMaximum(0.2085842);
   st_stack_15->SetDirectory(0);
   st_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_15->SetLineColor(ci);
   st_stack_15->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_15->GetXaxis()->SetRange(7,30);
   st_stack_15->GetXaxis()->SetLabelFont(42);
   st_stack_15->GetXaxis()->SetTitleOffset(1);
   st_stack_15->GetXaxis()->SetTitleFont(42);
   st_stack_15->GetYaxis()->SetTitle("Event/50.0");
   st_stack_15->GetYaxis()->SetLabelFont(42);
   st_stack_15->GetYaxis()->SetTitleSize(0.037);
   st_stack_15->GetYaxis()->SetTitleFont(42);
   st_stack_15->GetZaxis()->SetLabelFont(42);
   st_stack_15->GetZaxis()->SetTitleOffset(1);
   st_stack_15->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_15);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,0.5716082);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,1.166593);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,1.329788);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,0.9269245);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,0.6522676);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,0.4025993);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,0.216423);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,0.1514605);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,0.05871719);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,0.03102036);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,0.01735152);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,0.0157975);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(13,0.001673075);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(15,0.0008759808);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(16,0.006212176);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(17,0.002326514);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,0.03378989);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,0.05143572);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,0.05093733);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,0.04266314);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,0.04816045);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,0.03127652);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,0.02020806);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,0.01701603);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,0.01076188);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,0.007630014);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,0.005625445);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,0.005331313);
   VbbHcc_tags_H_pt_stack_1->SetBinError(13,0.001673075);
   VbbHcc_tags_H_pt_stack_1->SetBinError(15,0.0008759808);
   VbbHcc_tags_H_pt_stack_1->SetBinError(16,0.004763802);
   VbbHcc_tags_H_pt_stack_1->SetBinError(17,0.002326514);
   VbbHcc_tags_H_pt_stack_1->SetEntries(3172);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_1->SetLineColor(ci);
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
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,0.1971922);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,0.4129857);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,0.5972701);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,0.520968);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,0.3168715);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,0.1773328);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,0.083522);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,0.05443815);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,0.02205246);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,0.009832762);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,0.003609529);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,0.003145446);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,0.001470632);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(14,0.001370944);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(17,0.0002718712);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(20,0.0003053464);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,0.008044712);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,0.01032642);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,0.01235072);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,0.01220451);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,0.00927603);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,0.006750527);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,0.00487125);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,0.003712543);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,0.002345232);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,0.001577972);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,0.0008879658);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,0.0008509685);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,0.0006057662);
   VbbHcc_tags_H_pt_stack_2->SetBinError(14,0.0005802159);
   VbbHcc_tags_H_pt_stack_2->SetBinError(17,0.0002718712);
   VbbHcc_tags_H_pt_stack_2->SetBinError(20,0.0003053464);
   VbbHcc_tags_H_pt_stack_2->SetEntries(10130);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_2->SetLineColor(ci);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_18->Modified();
   H_pt_tags_18->cd();
   H_pt_tags_18->SetSelected(H_pt_tags_18);
}
