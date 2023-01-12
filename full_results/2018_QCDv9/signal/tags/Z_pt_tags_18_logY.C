#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_18_logY()
{
//=========Macro generated from canvas: Z_pt_tags_18/Z_pt_tags_18
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *Z_pt_tags_18 = new TCanvas("Z_pt_tags_18", "Z_pt_tags_18",0,0,600,600);
   Z_pt_tags_18->SetHighLightColor(2);
   Z_pt_tags_18->Range(37.97653,0.4180997,1705.96,3.065291);
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
   st->SetMaximum(473.2438);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",40,0,2000);
   st_stack_11->SetMinimum(5.442051);
   st_stack_11->SetMaximum(631.7885);
   st_stack_11->SetDirectory(0);
   st_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_11->SetLineColor(ci);
   st_stack_11->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_11->GetXaxis()->SetRange(7,30);
   st_stack_11->GetXaxis()->SetLabelFont(42);
   st_stack_11->GetXaxis()->SetTitleOffset(1);
   st_stack_11->GetXaxis()->SetTitleFont(42);
   st_stack_11->GetYaxis()->SetTitle("Events/50.0");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetTitleSize(0.037);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetTitleOffset(1);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,2.680119);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,4.732438);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,3.012468);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,1.414396);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,0.6774152);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,0.3788009);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,0.1791111);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,0.1108242);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,0.06087776);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,0.02839044);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,0.01765863);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,0.00355944);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,0.01239158);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(14,0.003940972);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(16,0.003020277);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(21,0.002353708);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,0.08492903);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,0.1122177);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,0.08944928);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,0.06271164);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,0.04164818);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,0.0310689);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,0.02150917);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,0.01672895);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,0.01304427);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,0.008361833);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,0.006763664);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,0.002613715);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,0.005544154);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(14,0.002884122);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(16,0.003020277);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(21,0.002353708);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(5951);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_2 = new TH1D("VbbHcc_tags_Z_pt_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,0.4055891);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,1.051521);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,1.229295);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,0.7254697);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,0.3703406);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,0.1842887);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,0.096758);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,0.05928131);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,0.02920629);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,0.01711437);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,0.01207923);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,0.01175584);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,0.004640705);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,0.004923246);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(15,0.0001897906);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(16,0.001594084);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(17,0.0008666937);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(18,0.001622343);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(19,0.0006435966);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(21,0.000964312);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(23,0.0001069757);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(25,0.000377906);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(33,0.0003624895);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,0.01238771);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,0.02010473);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,0.02184429);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,0.0165624);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,0.01183906);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,0.008305742);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,0.00608336);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,0.004937238);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,0.003401653);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,0.002558778);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,0.002119625);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,0.002128665);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,0.001410312);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,0.001396217);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(15,0.0001897906);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(16,0.0007288521);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(17,0.0005239195);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(18,0.0007641936);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(19,0.0004799434);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(21,0.0006822984);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(23,0.0001069757);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(25,0.000377906);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(33,0.0003624895);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(12320);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
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
