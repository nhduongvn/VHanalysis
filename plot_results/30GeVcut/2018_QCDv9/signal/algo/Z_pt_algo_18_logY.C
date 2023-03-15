#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_18_logY()
{
//=========Macro generated from canvas: Z_pt_algo_18/Z_pt_algo_18
//=========  (Tue Feb 14 16:07:55 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_18 = new TCanvas("Z_pt_algo_18", "Z_pt_algo_18",0,0,600,600);
   Z_pt_algo_18->SetHighLightColor(2);
   Z_pt_algo_18->Range(37.97653,0.5610239,1705.96,2.502454);
   Z_pt_algo_18->SetFillColor(0);
   Z_pt_algo_18->SetFillStyle(4000);
   Z_pt_algo_18->SetBorderMode(0);
   Z_pt_algo_18->SetBorderSize(2);
   Z_pt_algo_18->SetLogy();
   Z_pt_algo_18->SetLeftMargin(0.15709);
   Z_pt_algo_18->SetRightMargin(0.1234783);
   Z_pt_algo_18->SetBottomMargin(0.12);
   Z_pt_algo_18->SetFrameFillStyle(1000);
   Z_pt_algo_18->SetFrameBorderMode(0);
   Z_pt_algo_18->SetFrameFillStyle(1000);
   Z_pt_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(163.6499);
   
   TH1F *st_stack_75 = new TH1F("st_stack_75","",40,0,2000);
   st_stack_75->SetMinimum(6.222938);
   st_stack_75->SetMaximum(203.3813);
   st_stack_75->SetDirectory(0);
   st_stack_75->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_75->SetLineColor(ci);
   st_stack_75->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_75->GetXaxis()->SetRange(7,30);
   st_stack_75->GetXaxis()->SetLabelFont(42);
   st_stack_75->GetXaxis()->SetTitleOffset(1);
   st_stack_75->GetXaxis()->SetTitleFont(42);
   st_stack_75->GetYaxis()->SetTitle("Events/50.0");
   st_stack_75->GetYaxis()->SetLabelFont(42);
   st_stack_75->GetYaxis()->SetTitleSize(0.037);
   st_stack_75->GetYaxis()->SetTitleFont(42);
   st_stack_75->GetZaxis()->SetLabelFont(42);
   st_stack_75->GetZaxis()->SetTitleOffset(1);
   st_stack_75->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_75);
   
   
   TH1D *VbbHcc_algo_Z_pt_stack_1 = new TH1D("VbbHcc_algo_Z_pt_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,0.3643419);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,1.636499);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,1.478929);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,0.7730889);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(5,0.3837973);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(6,0.2530011);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(7,0.1258377);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(8,0.07618572);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(9,0.03368637);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(10,0.01310489);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(11,0.01022141);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(12,0.002582708);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(13,0.005799195);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(17,0.009651359);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,0.03127133);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,0.0693023);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,0.06464682);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,0.05973105);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(5,0.03355846);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(6,0.02723849);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(7,0.01844516);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(8,0.01483364);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(9,0.009640098);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(10,0.006021042);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(11,0.005191065);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(12,0.002582708);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(13,0.004101491);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(17,0.007143407);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(2101);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_2 = new TH1D("VbbHcc_algo_Z_pt_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,0.04643902);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,0.2766204);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,0.5374518);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,0.3123961);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,0.146634);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,0.06030853);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,0.03128199);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,0.01137129);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,0.005099374);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,0.001659037);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(11,0.0005921214);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,0.004015949);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,0.009843193);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,0.01422216);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,0.01095048);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,0.007172874);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,0.005346572);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,0.003292893);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,0.002141132);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,0.001331727);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,0.0007650738);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(11,0.0004208639);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(4230);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_algo_18->Modified();
   Z_pt_algo_18->cd();
   Z_pt_algo_18->SetSelected(Z_pt_algo_18);
}
