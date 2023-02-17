#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_18_logY()
{
//=========Macro generated from canvas: H_pt_both_18/H_pt_both_18
//=========  (Thu Feb 16 10:37:20 2023) by ROOT version 6.26/06
   TCanvas *H_pt_both_18 = new TCanvas("H_pt_both_18", "H_pt_both_18",0,0,600,600);
   H_pt_both_18->SetHighLightColor(2);
   H_pt_both_18->Range(37.97653,0.5359444,1705.96,2.598788);
   H_pt_both_18->SetFillColor(0);
   H_pt_both_18->SetFillStyle(4000);
   H_pt_both_18->SetBorderMode(0);
   H_pt_both_18->SetBorderSize(2);
   H_pt_both_18->SetLogy();
   H_pt_both_18->SetLeftMargin(0.15709);
   H_pt_both_18->SetRightMargin(0.1234783);
   H_pt_both_18->SetBottomMargin(0.12);
   H_pt_both_18->SetFrameFillStyle(1000);
   H_pt_both_18->SetFrameBorderMode(0);
   H_pt_both_18->SetFrameFillStyle(1000);
   H_pt_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(196.1738);
   
   TH1F *st_stack_143 = new TH1F("st_stack_143","",40,0,2000);
   st_stack_143->SetMinimum(6.074152);
   st_stack_143->SetMaximum(246.8902);
   st_stack_143->SetDirectory(0);
   st_stack_143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_143->SetLineColor(ci);
   st_stack_143->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_143->GetXaxis()->SetRange(7,30);
   st_stack_143->GetXaxis()->SetLabelFont(42);
   st_stack_143->GetXaxis()->SetTitleOffset(1);
   st_stack_143->GetXaxis()->SetTitleFont(42);
   st_stack_143->GetYaxis()->SetTitle("Events/50.0");
   st_stack_143->GetYaxis()->SetLabelFont(42);
   st_stack_143->GetYaxis()->SetTitleSize(0.037);
   st_stack_143->GetYaxis()->SetTitleFont(42);
   st_stack_143->GetZaxis()->SetLabelFont(42);
   st_stack_143->GetZaxis()->SetTitleOffset(1);
   st_stack_143->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_143);
   
   
   TH1D *VbbHcc_both_H_pt_stack_1 = new TH1D("VbbHcc_both_H_pt_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_stack_1->SetBinContent(1,0.809969);
   VbbHcc_both_H_pt_stack_1->SetBinContent(2,1.686172);
   VbbHcc_both_H_pt_stack_1->SetBinContent(3,1.961738);
   VbbHcc_both_H_pt_stack_1->SetBinContent(4,1.369205);
   VbbHcc_both_H_pt_stack_1->SetBinContent(5,0.9665793);
   VbbHcc_both_H_pt_stack_1->SetBinContent(6,0.591142);
   VbbHcc_both_H_pt_stack_1->SetBinContent(7,0.3181073);
   VbbHcc_both_H_pt_stack_1->SetBinContent(8,0.2170097);
   VbbHcc_both_H_pt_stack_1->SetBinContent(9,0.08412884);
   VbbHcc_both_H_pt_stack_1->SetBinContent(10,0.04435865);
   VbbHcc_both_H_pt_stack_1->SetBinContent(11,0.026116);
   VbbHcc_both_H_pt_stack_1->SetBinContent(12,0.02263435);
   VbbHcc_both_H_pt_stack_1->SetBinContent(13,0.002397148);
   VbbHcc_both_H_pt_stack_1->SetBinContent(15,0.001255088);
   VbbHcc_both_H_pt_stack_1->SetBinContent(16,0.008900683);
   VbbHcc_both_H_pt_stack_1->SetBinContent(17,0.003333383);
   VbbHcc_both_H_pt_stack_1->SetBinError(1,0.04715947);
   VbbHcc_both_H_pt_stack_1->SetBinError(2,0.07394531);
   VbbHcc_both_H_pt_stack_1->SetBinError(3,0.07461555);
   VbbHcc_both_H_pt_stack_1->SetBinError(4,0.0619872);
   VbbHcc_both_H_pt_stack_1->SetBinError(5,0.06971969);
   VbbHcc_both_H_pt_stack_1->SetBinError(6,0.04519323);
   VbbHcc_both_H_pt_stack_1->SetBinError(7,0.02932849);
   VbbHcc_both_H_pt_stack_1->SetBinError(8,0.02438023);
   VbbHcc_both_H_pt_stack_1->SetBinError(9,0.01541941);
   VbbHcc_both_H_pt_stack_1->SetBinError(10,0.01091307);
   VbbHcc_both_H_pt_stack_1->SetBinError(11,0.008157161);
   VbbHcc_both_H_pt_stack_1->SetBinError(12,0.007638601);
   VbbHcc_both_H_pt_stack_1->SetBinError(13,0.002397148);
   VbbHcc_both_H_pt_stack_1->SetBinError(15,0.001255088);
   VbbHcc_both_H_pt_stack_1->SetBinError(16,0.006825481);
   VbbHcc_both_H_pt_stack_1->SetBinError(17,0.003333383);
   VbbHcc_both_H_pt_stack_1->SetEntries(3234);

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
   VbbHcc_both_H_pt_stack_2->SetBinContent(1,0.2819502);
   VbbHcc_both_H_pt_stack_2->SetBinContent(2,0.6024059);
   VbbHcc_both_H_pt_stack_2->SetBinContent(3,0.8777998);
   VbbHcc_both_H_pt_stack_2->SetBinContent(4,0.7613819);
   VbbHcc_both_H_pt_stack_2->SetBinContent(5,0.4607426);
   VbbHcc_both_H_pt_stack_2->SetBinContent(6,0.2642082);
   VbbHcc_both_H_pt_stack_2->SetBinContent(7,0.1263708);
   VbbHcc_both_H_pt_stack_2->SetBinContent(8,0.07935138);
   VbbHcc_both_H_pt_stack_2->SetBinContent(9,0.03127008);
   VbbHcc_both_H_pt_stack_2->SetBinContent(10,0.01485921);
   VbbHcc_both_H_pt_stack_2->SetBinContent(11,0.006136153);
   VbbHcc_both_H_pt_stack_2->SetBinContent(12,0.005270475);
   VbbHcc_both_H_pt_stack_2->SetBinContent(13,0.002107092);
   VbbHcc_both_H_pt_stack_2->SetBinContent(14,0.001964261);
   VbbHcc_both_H_pt_stack_2->SetBinContent(17,0.0003895316);
   VbbHcc_both_H_pt_stack_2->SetBinContent(20,0.0004374943);
   VbbHcc_both_H_pt_stack_2->SetBinError(1,0.01151848);
   VbbHcc_both_H_pt_stack_2->SetBinError(2,0.01492692);
   VbbHcc_both_H_pt_stack_2->SetBinError(3,0.01790647);
   VbbHcc_both_H_pt_stack_2->SetBinError(4,0.01764228);
   VbbHcc_both_H_pt_stack_2->SetBinError(5,0.01337059);
   VbbHcc_both_H_pt_stack_2->SetBinError(6,0.009853505);
   VbbHcc_both_H_pt_stack_2->SetBinError(7,0.007150196);
   VbbHcc_both_H_pt_stack_2->SetBinError(8,0.005362293);
   VbbHcc_both_H_pt_stack_2->SetBinError(9,0.003344327);
   VbbHcc_both_H_pt_stack_2->SetBinError(10,0.00232658);
   VbbHcc_both_H_pt_stack_2->SetBinError(11,0.001388881);
   VbbHcc_both_H_pt_stack_2->SetBinError(12,0.001335819);
   VbbHcc_both_H_pt_stack_2->SetBinError(13,0.0008679298);
   VbbHcc_both_H_pt_stack_2->SetBinError(14,0.0008313219);
   VbbHcc_both_H_pt_stack_2->SetBinError(17,0.0003895316);
   VbbHcc_both_H_pt_stack_2->SetBinError(20,0.0004374943);
   VbbHcc_both_H_pt_stack_2->SetEntries(10352);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_both_18->Modified();
   H_pt_both_18->cd();
   H_pt_both_18->SetSelected(H_pt_both_18);
}
