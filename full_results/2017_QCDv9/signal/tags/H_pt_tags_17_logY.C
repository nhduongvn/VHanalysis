#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_17_logY()
{
//=========Macro generated from canvas: H_pt_tags_17/H_pt_tags_17
//=========  (Thu Mar  9 13:08:24 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_17 = new TCanvas("H_pt_tags_17", "H_pt_tags_17",0,0,600,600);
   H_pt_tags_17->SetHighLightColor(2);
   H_pt_tags_17->Range(37.97653,-0.09684134,1705.96,0.3000373);
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
   st->SetMinimum(1);
   st->SetMaximum(1.737757);
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",40,0,2000);
   st_stack_14->SetMinimum(0.8928615);
   st_stack_14->SetMaximum(1.821166);
   st_stack_14->SetDirectory(0);
   st_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_14->SetLineColor(ci);
   st_stack_14->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_14->GetXaxis()->SetRange(7,30);
   st_stack_14->GetXaxis()->SetLabelFont(42);
   st_stack_14->GetXaxis()->SetTitleOffset(1);
   st_stack_14->GetXaxis()->SetTitleFont(42);
   st_stack_14->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_14->GetYaxis()->SetLabelFont(42);
   st_stack_14->GetYaxis()->SetTitleSize(0.037);
   st_stack_14->GetYaxis()->SetTitleFont(42);
   st_stack_14->GetZaxis()->SetLabelFont(42);
   st_stack_14->GetZaxis()->SetTitleOffset(1);
   st_stack_14->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_14);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,0.6434793);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,1.226855);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,1.442338);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,1.095929);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,0.7049704);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,0.360913);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,0.2287024);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,0.1452926);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,0.07087509);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,0.03709571);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,0.01748226);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,0.004056246);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(13,0.005888298);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(14,0.003602006);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(15,0.001998531);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(16,0.006218937);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(18,0.001115582);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(19,0.001842579);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(20,0.001227937);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(24,0.002001313);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,0.03508247);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,0.04809253);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,0.05226339);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,0.04548903);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,0.03633107);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,0.02641501);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,0.02027609);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,0.01693862);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,0.01156571);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,0.008098851);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,0.006535585);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,0.00292029);
   VbbHcc_tags_H_pt_stack_1->SetBinError(13,0.003401433);
   VbbHcc_tags_H_pt_stack_1->SetBinError(14,0.002547894);
   VbbHcc_tags_H_pt_stack_1->SetBinError(15,0.001998531);
   VbbHcc_tags_H_pt_stack_1->SetBinError(16,0.003616673);
   VbbHcc_tags_H_pt_stack_1->SetBinError(18,0.001115582);
   VbbHcc_tags_H_pt_stack_1->SetBinError(19,0.001842579);
   VbbHcc_tags_H_pt_stack_1->SetBinError(20,0.001227937);
   VbbHcc_tags_H_pt_stack_1->SetBinError(24,0.002001313);
   VbbHcc_tags_H_pt_stack_1->SetEntries(3477);

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
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,0.2071534);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,0.4477938);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,0.6410619);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,0.5423113);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,0.3318698);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,0.1777406);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,0.0936727);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,0.04245532);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,0.02965254);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,0.01161452);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,0.00437021);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,0.00263223);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,0.0010274);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(14,0.0008127161);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(16,0.0001728116);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(19,0.0002398048);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(24,0.0002536154);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,0.007035511);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,0.01039734);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,0.01247279);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,0.01143709);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,0.0089323);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,0.006497158);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,0.004695417);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,0.003161856);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,0.002664906);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,0.001719889);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,0.001018064);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,0.0008039835);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,0.0005195383);
   VbbHcc_tags_H_pt_stack_2->SetBinError(14,0.0004101098);
   VbbHcc_tags_H_pt_stack_2->SetBinError(16,0.0001728116);
   VbbHcc_tags_H_pt_stack_2->SetBinError(19,0.0002398048);
   VbbHcc_tags_H_pt_stack_2->SetBinError(24,0.0002536154);
   VbbHcc_tags_H_pt_stack_2->SetEntries(11007);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_17->Modified();
   H_pt_tags_17->cd();
   H_pt_tags_17->SetSelected(H_pt_tags_17);
}
