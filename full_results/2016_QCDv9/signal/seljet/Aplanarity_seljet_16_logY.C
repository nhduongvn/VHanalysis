#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_16_logY()
{
//=========Macro generated from canvas: Aplanarity_seljet_16/Aplanarity_seljet_16
//=========  (Tue Feb 14 10:43:11 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_16 = new TCanvas("Aplanarity_seljet_16", "Aplanarity_seljet_16",0,0,600,600);
   Aplanarity_seljet_16->SetHighLightColor(2);
   Aplanarity_seljet_16->Range(-0.2183529,0.07047886,1.171633,4.562931);
   Aplanarity_seljet_16->SetFillColor(0);
   Aplanarity_seljet_16->SetFillStyle(4000);
   Aplanarity_seljet_16->SetBorderMode(0);
   Aplanarity_seljet_16->SetBorderSize(2);
   Aplanarity_seljet_16->SetLogy();
   Aplanarity_seljet_16->SetLeftMargin(0.15709);
   Aplanarity_seljet_16->SetRightMargin(0.1234783);
   Aplanarity_seljet_16->SetBottomMargin(0.12);
   Aplanarity_seljet_16->SetFrameFillStyle(1000);
   Aplanarity_seljet_16->SetFrameBorderMode(0);
   Aplanarity_seljet_16->SetFrameFillStyle(1000);
   Aplanarity_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(8208.164);
   
   TH1F *st_stack_317 = new TH1F("st_stack_317","",50,0,1);
   st_stack_317->SetMinimum(4.0698);
   st_stack_317->SetMaximum(12992.29);
   st_stack_317->SetDirectory(0);
   st_stack_317->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_317->SetLineColor(ci);
   st_stack_317->GetXaxis()->SetTitle("Aplanarity");
   st_stack_317->GetXaxis()->SetRange(1,50);
   st_stack_317->GetXaxis()->SetLabelFont(42);
   st_stack_317->GetXaxis()->SetTitleOffset(1);
   st_stack_317->GetXaxis()->SetTitleFont(42);
   st_stack_317->GetYaxis()->SetTitle("Events/0.02");
   st_stack_317->GetYaxis()->SetLabelFont(42);
   st_stack_317->GetYaxis()->SetTitleSize(0.037);
   st_stack_317->GetYaxis()->SetTitleFont(42);
   st_stack_317->GetZaxis()->SetLabelFont(42);
   st_stack_317->GetZaxis()->SetTitleOffset(1);
   st_stack_317->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_317);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,63.54279);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,47.8907);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,32.46024);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,21.33115);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,15.71712);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,10.96558);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,8.050873);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,6.033704);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,4.35412);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,3.18106);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,2.312982);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,1.586024);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,1.107401);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,0.7396004);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,0.5314123);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,0.4568246);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,0.206332);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,0.1259419);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,0.07782699);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,0.03796053);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,0.015049);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,0.003218024);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,0.4356053);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,0.3805414);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,0.3134823);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,0.2541024);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,0.2180834);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,0.1827415);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,0.1566537);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,0.1361139);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,0.1159219);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,0.09829878);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,0.08376019);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,0.07023892);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,0.05801258);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,0.0468758);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,0.03994771);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,0.03705157);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,0.02488885);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,0.02034935);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,0.01588431);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,0.01053149);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,0.006737016);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,0.003218024);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(78219);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,18.53886);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,13.5211);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,8.73068);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,5.772213);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,3.920619);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,2.589462);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,1.823778);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,1.220019);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,0.8823783);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,0.5762198);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,0.3930835);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,0.2655078);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,0.1730895);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,0.09540166);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,0.07176338);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,0.04339892);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,0.02309924);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,0.01472285);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,0.007931261);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,0.004197169);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,0.0005716233);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,0.001410315);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,0.08387024);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,0.07197846);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,0.05794529);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,0.04716157);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,0.03890607);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,0.03160596);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,0.02654016);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,0.02170503);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,0.01846491);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,0.0149267);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,0.01233226);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,0.01011567);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,0.00816368);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,0.006055182);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,0.005306852);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,0.004086738);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,0.002999695);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,0.002356681);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,0.001775374);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,0.001267586);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,0.0004309679);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,0.0007139589);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(155966);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_seljet_16->Modified();
   Aplanarity_seljet_16->cd();
   Aplanarity_seljet_16->SetSelected(Aplanarity_seljet_16);
}
