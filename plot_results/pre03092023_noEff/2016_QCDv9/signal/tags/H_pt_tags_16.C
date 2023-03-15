#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_16()
{
//=========Macro generated from canvas: H_pt_tags_16/H_pt_tags_16
//=========  (Thu Feb 16 10:35:18 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_16 = new TCanvas("H_pt_tags_16", "H_pt_tags_16",0,0,600,600);
   H_pt_tags_16->SetHighLightColor(2);
   H_pt_tags_16->Range(37.97653,-0.2183384,1705.96,1.601149);
   H_pt_tags_16->SetFillColor(0);
   H_pt_tags_16->SetFillStyle(4000);
   H_pt_tags_16->SetBorderMode(0);
   H_pt_tags_16->SetBorderSize(2);
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
   st->SetMaximum(1.4192);
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",40,0,2000);
   st_stack_13->SetMinimum(0);
   st_stack_13->SetMaximum(1.4192);
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
   st_stack_13->GetYaxis()->SetTitle("Events/50.0");
   st_stack_13->GetYaxis()->SetLabelFont(42);
   st_stack_13->GetYaxis()->SetTitleSize(0.037);
   st_stack_13->GetYaxis()->SetTitleFont(42);
   st_stack_13->GetZaxis()->SetLabelFont(42);
   st_stack_13->GetZaxis()->SetTitleOffset(1);
   st_stack_13->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_13);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,0.4220667);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,0.8088755);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,0.9461332);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,0.6408717);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,0.3692876);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,0.2765671);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,0.1710062);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,0.06545374);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,0.06509094);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,0.0312243);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,0.002789437);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,0.009017313);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(13,0.008930011);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(14,0.005775356);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(19,0.003064584);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(23,0.002930821);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,0.03597078);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,0.04905138);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,0.0530264);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,0.04350332);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,0.03298941);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,0.02844358);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,0.02231284);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,0.01388547);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,0.01422654);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,0.009471101);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,0.002789437);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,0.005218944);
   VbbHcc_tags_H_pt_stack_1->SetBinError(13,0.005156277);
   VbbHcc_tags_H_pt_stack_1->SetBinError(14,0.004083907);
   VbbHcc_tags_H_pt_stack_1->SetBinError(19,0.003064584);
   VbbHcc_tags_H_pt_stack_1->SetBinError(23,0.002930821);
   VbbHcc_tags_H_pt_stack_1->SetEntries(1354);

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
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,0.1255536);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,0.2925672);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,0.4173937);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,0.3590127);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,0.2040854);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,0.1070307);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,0.05470109);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,0.02687456);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,0.01350275);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,0.009189448);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,0.004551107);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,0.001986183);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,0.001288095);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(19,0.000387588);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,0.006931284);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,0.01056808);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,0.01263546);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,0.01170424);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,0.008812003);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,0.006377877);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,0.004561268);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,0.003177073);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,0.00224459);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,0.001842671);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,0.00131518);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,0.0008896751);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,0.0006724453);
   VbbHcc_tags_H_pt_stack_2->SetBinError(19,0.000387588);
   VbbHcc_tags_H_pt_stack_2->SetEntries(4322);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_16->Modified();
   H_pt_tags_16->cd();
   H_pt_tags_16->SetSelected(H_pt_tags_16);
}
