void Z_pt_tags_18_logY()
{
//=========Macro generated from canvas: Z_pt_tags_18/Z_pt_tags_18
//=========  (Thu Feb  9 09:44:29 2023) by ROOT version 6.14/09
   TCanvas *Z_pt_tags_18 = new TCanvas("Z_pt_tags_18", "Z_pt_tags_18",0,0,600,600);
   Z_pt_tags_18->SetHighLightColor(2);
   Z_pt_tags_18->Range(37.97653,0.3217693,1705.96,3.462868);
   Z_pt_tags_18->SetFillColor(0);
   Z_pt_tags_18->SetFillStyle(4000);
   Z_pt_tags_18->SetBorderMode(0);
   Z_pt_tags_18->SetBorderSize(2);
   Z_pt_tags_18->SetLogy();
   Z_pt_tags_18->SetLeftMargin(0.15709);
   Z_pt_tags_18->SetRightMargin(0.1234783);
   Z_pt_tags_18->SetBottomMargin(0.12);
   Z_pt_tags_18->SetFrameFillStyle(1000);
   Z_pt_tags_18->SetFrameBorderMode(0);
   Z_pt_tags_18->SetFrameFillStyle(1000);
   Z_pt_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1005.719);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",40,0,2000);
   st_stack_11->SetMinimum(4.996906);
   st_stack_11->SetMaximum(1408.505);
   st_stack_11->SetDirectory(0);
   st_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_11->SetLineColor(ci);
   st_stack_11->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_11->GetXaxis()->SetRange(7,30);
   st_stack_11->GetXaxis()->SetLabelFont(42);
   st_stack_11->GetXaxis()->SetLabelSize(0.035);
   st_stack_11->GetXaxis()->SetTitleSize(0.035);
   st_stack_11->GetXaxis()->SetTitleFont(42);
   st_stack_11->GetYaxis()->SetTitle("Events/50.0");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetLabelSize(0.035);
   st_stack_11->GetYaxis()->SetTitleSize(0.037);
   st_stack_11->GetYaxis()->SetTitleOffset(0);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetLabelSize(0.035);
   st_stack_11->GetZaxis()->SetTitleSize(0.035);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,4.347014);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,8.263378);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,5.265763);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,2.643981);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,1.407221);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,0.7799446);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,0.4468393);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,0.3049896);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,0.1170887);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,0.07116198);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,0.01569855);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,0.0164449);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,0.002958322);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(14,0.01022762);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(15,0.002736771);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(16,0.003340468);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(17,0.009651359);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,0.1115014);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,0.1544627);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,0.1200191);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,0.09777364);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,0.06880464);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,0.04747034);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,0.03462856);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,0.03477695);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,0.01784424);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,0.01381825);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,0.006045411);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,0.006791094);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,0.002958322);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(14,0.005254239);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(15,0.002736771);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(16,0.003340468);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(17,0.007143407);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(9499);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_2 = new TH1D("VbbHcc_tags_Z_pt_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,0.6780156);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,1.793814);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,2.084687);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,1.355162);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,0.7482842);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,0.3881088);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,0.1934362);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,0.1033908);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,0.04237446);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,0.02255353);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,0.009047269);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,0.003829277);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,0.0004371028);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,0.0006678741);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(15,0.0002938073);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(16,0.001067161);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(19,0.0003240891);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(21,0.0002658739);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,0.01642203);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,0.02886575);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,0.03140382);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,0.0230152);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,0.01638881);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,0.01222901);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,0.008262155);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,0.006187057);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,0.00379843);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,0.002804403);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,0.001723289);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,0.001115243);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,0.0004371028);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,0.0004756561);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(15,0.0002938073);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(16,0.0006195251);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(19,0.0003240891);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(21,0.0002658739);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(21858);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_tags_18->Modified();
   Z_pt_tags_18->cd();
   Z_pt_tags_18->SetSelected(Z_pt_tags_18);
}
