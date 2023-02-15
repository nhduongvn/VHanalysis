#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_16_logY()
{
//=========Macro generated from canvas: Aplanarity_alljet_16/Aplanarity_alljet_16
//=========  (Tue Feb 14 16:02:05 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_16 = new TCanvas("Aplanarity_alljet_16", "Aplanarity_alljet_16",0,0,600,600);
   Aplanarity_alljet_16->SetHighLightColor(2);
   Aplanarity_alljet_16->Range(-0.2183529,-2.844339,1.171633,16.29591);
   Aplanarity_alljet_16->SetFillColor(0);
   Aplanarity_alljet_16->SetFillStyle(4000);
   Aplanarity_alljet_16->SetBorderMode(0);
   Aplanarity_alljet_16->SetBorderSize(2);
   Aplanarity_alljet_16->SetLogy();
   Aplanarity_alljet_16->SetLeftMargin(0.15709);
   Aplanarity_alljet_16->SetRightMargin(0.1234783);
   Aplanarity_alljet_16->SetBottomMargin(0.12);
   Aplanarity_alljet_16->SetFrameFillStyle(1000);
   Aplanarity_alljet_16->SetFrameBorderMode(0);
   Aplanarity_alljet_16->SetFrameFillStyle(1000);
   Aplanarity_alljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(2.193026);
   st->SetMaximum(6.521014e+13);
   
   TH1F *st_stack_253 = new TH1F("st_stack_253","",50,0,1);
   st_stack_253->SetMinimum(0.2834599);
   st_stack_253->SetMaximum(2.409289e+14);
   st_stack_253->SetDirectory(0);
   st_stack_253->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_253->SetLineColor(ci);
   st_stack_253->GetXaxis()->SetTitle("Aplanarity");
   st_stack_253->GetXaxis()->SetRange(1,50);
   st_stack_253->GetXaxis()->SetLabelFont(42);
   st_stack_253->GetXaxis()->SetTitleOffset(1);
   st_stack_253->GetXaxis()->SetTitleFont(42);
   st_stack_253->GetYaxis()->SetTitle("Events/0.02");
   st_stack_253->GetYaxis()->SetLabelFont(42);
   st_stack_253->GetYaxis()->SetTitleSize(0.037);
   st_stack_253->GetYaxis()->SetTitleFont(42);
   st_stack_253->GetZaxis()->SetLabelFont(42);
   st_stack_253->GetZaxis()->SetTitleOffset(1);
   st_stack_253->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_253);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(0,5960.56);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(1,6.520882e+11);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(2,5.590484e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(3,2.125443e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(4,1.050242e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(5,5.860095e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(6,3.519019e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(7,2.202372e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(8,1.415977e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(9,9.251497e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(10,6.110595e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(11,3.993838e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(12,2.636035e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(13,1.747202e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(14,1.107593e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(15,7.269692e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(16,4.502374e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(17,2.738285e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(18,1.460609e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(19,7595819);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(20,4223159);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(21,1557707);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(22,536628.6);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(23,202089.6);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(24,2171.655);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(0,2836.251);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(1,1.19861e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(2,3.47208e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(3,2.139636e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(4,1.504397e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(5,1.124166e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(6,8715178);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(7,6899774);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(8,5533046);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(9,4473836);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(10,3638348);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(11,2937917);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(12,2387994);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(13,1947763);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(14,1546676);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(15,1258543);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(16,990204.8);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(17,775173.9);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(18,563011.5);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(19,405559.6);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(20,304283.3);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(21,184453.9);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(22,106570.3);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(23,65564.84);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(24,1795.002);
   VbbHcc_alljet_Aplanarity_stack_1->SetEntries(1.882126e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(0,1.551911);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(1,1.315604e+07);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(2,5596113);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(3,3346052);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(4,2204193);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(5,1520544);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(6,1076761);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(7,772453.5);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(8,558258.8);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(9,404015);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(10,291519.9);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(11,208570.5);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(12,147900.5);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(13,103258.8);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(14,70779.68);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(15,47128.8);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(16,30505.24);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(17,19047.42);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(18,11224.31);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(19,6200.322);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(20,3131.675);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(21,1383.291);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(22,513.2103);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(23,138.4868);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(24,21.37036);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(25,0.6440548);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(0,0.3157177);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(1,915.5519);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(2,605.725);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(3,470.2846);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(4,382.4156);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(5,317.9639);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(6,267.7854);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(7,226.9241);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(8,192.9811);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(9,164.221);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(10,139.5314);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(11,118.0539);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(12,99.44143);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(13,83.08691);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(14,68.80745);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(15,56.14968);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(16,45.18265);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(17,35.70753);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(18,27.41777);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(19,20.37175);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(20,14.48124);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(21,9.625713);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(22,5.866056);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(23,3.040516);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(24,1.200604);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(25,0.2081867);
   VbbHcc_alljet_Aplanarity_stack_2->SetEntries(4.864545e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   Aplanarity_alljet_16->Modified();
   Aplanarity_alljet_16->cd();
   Aplanarity_alljet_16->SetSelected(Aplanarity_alljet_16);
}
