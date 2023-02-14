#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_18_logY()
{
//=========Macro generated from canvas: H_pt_tags_18/H_pt_tags_18
//=========  (Tue Feb 14 10:43:05 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_18 = new TCanvas("H_pt_tags_18", "H_pt_tags_18",0,0,600,600);
   H_pt_tags_18->SetHighLightColor(2);
   H_pt_tags_18->Range(37.97653,0.350988,1705.96,3.340785);
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
   st->SetMaximum(797.6495);
   
   TH1F *st_stack_15 = new TH1F("st_stack_15","",40,0,2000);
   st_stack_15->SetMinimum(5.125823);
   st_stack_15->SetMaximum(1101.045);
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
   st_stack_15->GetYaxis()->SetTitle("Events/50.0");
   st_stack_15->GetYaxis()->SetLabelFont(42);
   st_stack_15->GetYaxis()->SetTitleSize(0.037);
   st_stack_15->GetYaxis()->SetTitleFont(42);
   st_stack_15->GetZaxis()->SetLabelFont(42);
   st_stack_15->GetZaxis()->SetTitleOffset(1);
   st_stack_15->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_15);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,4.415615);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,7.976495);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,4.985486);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,2.469345);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,1.419136);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,0.8139909);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,0.4248593);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,0.2580743);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,0.1102901);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,0.05550581);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,0.03099753);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,0.02565827);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(13,0.0107084);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(14,0.008730283);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(15,0.002434505);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(16,0.008900683);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,0.1129232);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,0.1539636);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,0.117544);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,0.08345035);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,0.07814008);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,0.05145918);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,0.03381355);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,0.02634166);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,0.01745744);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,0.0122695);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,0.008962849);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,0.008129024);
   VbbHcc_tags_H_pt_stack_1->SetBinError(13,0.005403356);
   VbbHcc_tags_H_pt_stack_1->SetBinError(14,0.005070384);
   VbbHcc_tags_H_pt_stack_1->SetBinError(15,0.002434505);
   VbbHcc_tags_H_pt_stack_1->SetBinError(16,0.006825481);
   VbbHcc_tags_H_pt_stack_1->SetEntries(9189);

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
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,0.7935595);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,1.822308);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,1.91135);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,1.332486);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,0.7008095);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,0.3627118);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,0.1689064);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,0.09713308);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,0.04329448);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,0.01863577);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,0.006578699);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,0.006851389);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,0.002120918);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(14,0.001964261);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(16,0.0002658739);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(17,0.0003895316);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(20,0.0004374943);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,0.01814118);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,0.02905322);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,0.02958794);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,0.0231207);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,0.01632316);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,0.01165171);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,0.008306397);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,0.005918121);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,0.003953641);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,0.002586526);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,0.001457749);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,0.001514476);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,0.0008732208);
   VbbHcc_tags_H_pt_stack_2->SetBinError(14,0.0008313219);
   VbbHcc_tags_H_pt_stack_2->SetBinError(16,0.0002658739);
   VbbHcc_tags_H_pt_stack_2->SetBinError(17,0.0003895316);
   VbbHcc_tags_H_pt_stack_2->SetBinError(20,0.0004374943);
   VbbHcc_tags_H_pt_stack_2->SetEntries(21359);

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
