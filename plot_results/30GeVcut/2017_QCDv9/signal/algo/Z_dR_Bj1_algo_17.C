#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_17()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_17/Z_dR_Bj1_algo_17
//=========  (Tue Feb 14 15:57:10 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_17 = new TCanvas("Z_dR_Bj1_algo_17", "Z_dR_Bj1_algo_17",0,0,600,600);
   Z_dR_Bj1_algo_17->SetHighLightColor(2);
   Z_dR_Bj1_algo_17->Range(-1.310117,-0.2352541,7.029799,1.725197);
   Z_dR_Bj1_algo_17->SetFillColor(0);
   Z_dR_Bj1_algo_17->SetFillStyle(4000);
   Z_dR_Bj1_algo_17->SetBorderMode(0);
   Z_dR_Bj1_algo_17->SetBorderSize(2);
   Z_dR_Bj1_algo_17->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_17->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_17->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_17->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.529152);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",30,0,6);
   st_stack_118->SetMinimum(0);
   st_stack_118->SetMaximum(1.529152);
   st_stack_118->SetDirectory(0);
   st_stack_118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_118->SetLineColor(ci);
   st_stack_118->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_118->GetXaxis()->SetRange(1,30);
   st_stack_118->GetXaxis()->SetLabelFont(42);
   st_stack_118->GetXaxis()->SetTitleOffset(1);
   st_stack_118->GetXaxis()->SetTitleFont(42);
   st_stack_118->GetYaxis()->SetTitle("Events/0.2");
   st_stack_118->GetYaxis()->SetLabelFont(42);
   st_stack_118->GetYaxis()->SetTitleSize(0.037);
   st_stack_118->GetYaxis()->SetTitleFont(42);
   st_stack_118->GetZaxis()->SetLabelFont(42);
   st_stack_118->GetZaxis()->SetTitleOffset(1);
   st_stack_118->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_118);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,0.3413342);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,0.7585205);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,0.75536);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,0.5736312);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,0.4061245);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,0.2133339);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,0.1311608);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,0.1011361);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,0.04898779);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,0.01738276);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,0.02370377);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,0.009481507);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,0.01580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,0.01580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,0.006321005);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,0.006321005);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,0.004740753);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,0.02322485);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,0.03462157);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,0.03454936);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,0.03010783);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,0.02533335);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,0.01836086);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,0.01439677);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,0.01264201);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,0.008798466);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,0.0052411);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,0.006120286);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,0.003870809);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,0.004997193);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,0.004997193);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,0.002737075);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,0.002234813);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(2177);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,0.08491071);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,0.2474659);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,0.2640744);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,0.1654617);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,0.07037832);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,0.03383972);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,0.01868451);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,0.009134649);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,0.007266198);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,0.006850987);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,0.006643381);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,0.003529296);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,0.00477493);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,0.00332169);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,0.004152113);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,0.002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,0.002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,0.0004152113);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,0.004198565);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,0.007167659);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,0.007404278);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,0.005860954);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,0.003822425);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,0.002650532);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,0.00196952);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,0.0013771);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,0.001228212);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,0.001192604);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,0.001174395);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,0.00085598);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,0.0009956417);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,0.0008304226);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,0.0009284407);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,0.0006565067);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,0.0006565067);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,0.0002935987);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(4507);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_algo_17->Modified();
   Z_dR_Bj1_algo_17->cd();
   Z_dR_Bj1_algo_17->SetSelected(Z_dR_Bj1_algo_17);
}
