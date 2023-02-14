#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Tue Feb 14 10:43:06 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2183529,0.3340591,1.171633,3.411363);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetFillStyle(4000);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLogy();
   Aplanarity_tags_18->SetLeftMargin(0.15709);
   Aplanarity_tags_18->SetRightMargin(0.1234783);
   Aplanarity_tags_18->SetBottomMargin(0.12);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(911.9969);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",50,0,1);
   st_stack_63->SetMinimum(5.050514);
   st_stack_63->SetMaximum(1269.498);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetTitle("Aplanarity");
   st_stack_63->GetXaxis()->SetRange(1,50);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetTitleOffset(1);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Events/0.02");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetTitleSize(0.037);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetTitleOffset(1);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,6.743624);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,4.835402);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,3.237431);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,2.318621);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,1.71395);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,1.196747);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,0.8216461);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,0.6191266);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,0.4344343);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.313906);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,0.2144258);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,0.2026085);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,0.141083);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,0.1116582);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,0.03077446);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,0.03174097);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,0.00864972);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,0.01924087);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,0.009032025);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,0.007660962);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(21,0.002444891);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(22,0.002019195);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.1463194);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.1210365);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.09517532);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.08007269);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.07091113);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.05852511);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.04764324);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,0.04546955);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,0.03454212);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.02935747);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,0.02403435);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,0.02346762);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,0.02047394);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,0.01788925);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,0.008980546);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,0.009156567);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,0.004773338);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,0.007027685);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,0.005275524);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,0.004474716);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(21,0.002444891);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(22,0.002019195);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(9189);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,2.376345);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,1.624641);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,1.06257);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,0.7042119);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.465563);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.3323965);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.2199005);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.1672065);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.1035054);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.0654943);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.05892597);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.03317031);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.02324079);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.01060942);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.0115052);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.003994494);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.002328692);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,0.001731704);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,0.001512648);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,0.0004346981);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,0.0005143134);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.03268456);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.02811183);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.02004736);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.01603992);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.01349834);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.01086648);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.008937831);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.009272783);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.006039579);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.005165065);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.005740558);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.004209385);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.002966261);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.001888481);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.002058439);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.001176924);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.0009008551);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,0.0007458047);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,0.0007668695);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,0.0004346981);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,0.0004419287);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(21359);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
