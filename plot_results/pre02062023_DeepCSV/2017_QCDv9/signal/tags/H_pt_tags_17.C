#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_17()
{
//=========Macro generated from canvas: H_pt_tags_17/H_pt_tags_17
//=========  (Wed Jan 18 11:40:22 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_17 = new TCanvas("H_pt_tags_17", "H_pt_tags_17",0,0,600,600);
   H_pt_tags_17->SetHighLightColor(2);
   H_pt_tags_17->Range(37.97653,-0.7830475,1705.96,5.742349);
   H_pt_tags_17->SetFillColor(0);
   H_pt_tags_17->SetFillStyle(4000);
   H_pt_tags_17->SetBorderMode(0);
   H_pt_tags_17->SetBorderSize(2);
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
   st->SetMaximum(5.089809);
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",40,0,2000);
   st_stack_14->SetMinimum(0);
   st_stack_14->SetMaximum(5.089809);
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
   st_stack_14->GetYaxis()->SetTitle("Events/50.0");
   st_stack_14->GetYaxis()->SetLabelFont(42);
   st_stack_14->GetYaxis()->SetTitleSize(0.037);
   st_stack_14->GetYaxis()->SetTitleFont(42);
   st_stack_14->GetZaxis()->SetLabelFont(42);
   st_stack_14->GetZaxis()->SetTitleOffset(1);
   st_stack_14->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_14);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,2.077882);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,3.393206);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,2.030056);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,1.065226);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,0.4303169);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,0.2194225);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,0.1100783);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,0.07819252);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,0.05933986);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,0.01414513);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,0.0152461);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,0.005634108);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(14,0.003007753);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(15,0.001259297);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(16,0.001727301);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(22,0.001646926);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,0.06212473);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,0.07880965);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,0.06093923);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,0.04393294);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,0.02756118);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,0.02017469);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,0.01421457);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,0.01191686);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,0.01053671);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,0.00482977);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,0.00509408);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,0.002991408);
   VbbHcc_tags_H_pt_stack_1->SetBinError(14,0.00212737);
   VbbHcc_tags_H_pt_stack_1->SetBinError(15,0.001259297);
   VbbHcc_tags_H_pt_stack_1->SetBinError(16,0.001727301);
   VbbHcc_tags_H_pt_stack_1->SetBinError(22,0.001646926);
   VbbHcc_tags_H_pt_stack_1->SetEntries(6355);

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
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,0.3010918);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,0.6791933);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,0.7265371);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,0.4707945);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,0.231856);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,0.1025437);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,0.06069075);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,0.02919855);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,0.01193465);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,0.006160284);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,0.002161301);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,0.002072303);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,0.001045346);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(14,0.0007290674);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(15,0.0002877666);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(16,0.0002291009);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,0.008588081);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,0.01293389);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,0.01333666);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,0.01073541);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,0.007498387);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,0.005005735);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,0.003785573);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,0.002675169);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,0.001654235);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,0.001236227);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,0.0006886399);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,0.0007168187);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,0.0005204162);
   VbbHcc_tags_H_pt_stack_2->SetBinError(14,0.0004247857);
   VbbHcc_tags_H_pt_stack_2->SetBinError(15,0.0002263783);
   VbbHcc_tags_H_pt_stack_2->SetBinError(16,0.0002291009);
   VbbHcc_tags_H_pt_stack_2->SetEntries(12362);

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_17->Modified();
   H_pt_tags_17->cd();
   H_pt_tags_17->SetSelected(H_pt_tags_17);
}
