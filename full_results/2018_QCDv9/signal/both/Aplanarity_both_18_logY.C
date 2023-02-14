#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Tue Feb 14 10:43:09 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2183529,0.3309243,1.171633,3.424479);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetFillStyle(4000);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15709);
   Aplanarity_both_18->SetRightMargin(0.1234783);
   Aplanarity_both_18->SetBottomMargin(0.12);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(934.9968);
   
   TH1F *st_stack_191 = new TH1F("st_stack_191","",50,0,1);
   st_stack_191->SetMinimum(5.036756);
   st_stack_191->SetMaximum(1303.537);
   st_stack_191->SetDirectory(0);
   st_stack_191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_191->SetLineColor(ci);
   st_stack_191->GetXaxis()->SetTitle("Aplanarity");
   st_stack_191->GetXaxis()->SetRange(1,50);
   st_stack_191->GetXaxis()->SetLabelFont(42);
   st_stack_191->GetXaxis()->SetTitleOffset(1);
   st_stack_191->GetXaxis()->SetTitleFont(42);
   st_stack_191->GetYaxis()->SetTitle("Events/0.02");
   st_stack_191->GetYaxis()->SetLabelFont(42);
   st_stack_191->GetYaxis()->SetTitleSize(0.037);
   st_stack_191->GetYaxis()->SetTitleFont(42);
   st_stack_191->GetZaxis()->SetLabelFont(42);
   st_stack_191->GetZaxis()->SetTitleOffset(1);
   st_stack_191->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_191);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,6.899757);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,4.969298);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,3.312598);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,2.364236);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,1.759747);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,1.227458);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.850363);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.6329889);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,0.4405132);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.3196257);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.225039);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,0.2083302);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.141083);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,0.1116582);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,0.03313264);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.03174097);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,0.00864972);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,0.01924087);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,0.009032025);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,0.007660962);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,0.002444891);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(22,0.002019195);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.1477953);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.1226577);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.0961701);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.08085033);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.07175615);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.059332);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.04847987);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.04591086);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,0.03472804);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.02964198);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.02461954);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,0.02382197);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.02047394);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,0.01788925);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,0.009284998);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.009156567);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,0.004773338);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,0.007027685);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,0.005275524);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,0.004474716);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,0.002444891);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(22,0.002019195);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(9410);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,2.45021);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,1.663421);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,1.089195);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.7217724);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.476836);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.3395531);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.2245775);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.1725892);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.1063524);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.06677736);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.06057506);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.03471871);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.02394596);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.01092998);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.01140937);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.004310135);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.002328692);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.001731704);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.001852721);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.0004346981);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,0.0005143134);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.0330981);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.0283533);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.02027463);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.01623794);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.01364774);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.01097797);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.009046698);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.009374157);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.006129368);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.005205527);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.00578859);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.004270543);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.003008333);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.001915494);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.002041047);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.001218515);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.0009008551);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.0007458047);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.0008388914);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.0004346981);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,0.0004419287);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(21941);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
