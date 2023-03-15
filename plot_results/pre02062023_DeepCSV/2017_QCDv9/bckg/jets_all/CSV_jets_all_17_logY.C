#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_17_logY()
{
//=========Macro generated from canvas: CSV_jets_all_17/CSV_jets_all_17
//=========  (Mon Dec 19 11:02:05 2022) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_17 = new TCanvas("CSV_jets_all_17", "CSV_jets_all_17",0,0,600,600);
   CSV_jets_all_17->SetHighLightColor(2);
   CSV_jets_all_17->Range(-0.2183529,4.77018,1.171633,16.19933);
   CSV_jets_all_17->SetFillColor(0);
   CSV_jets_all_17->SetFillStyle(4000);
   CSV_jets_all_17->SetBorderMode(0);
   CSV_jets_all_17->SetBorderSize(2);
   CSV_jets_all_17->SetLogy();
   CSV_jets_all_17->SetLeftMargin(0.15709);
   CSV_jets_all_17->SetRightMargin(0.1234783);
   CSV_jets_all_17->SetBottomMargin(0.12);
   CSV_jets_all_17->SetFrameFillStyle(1000);
   CSV_jets_all_17->SetFrameBorderMode(0);
   CSV_jets_all_17->SetFrameFillStyle(1000);
   CSV_jets_all_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(6800561);
   st->SetMaximum(4.442902e+14);
   
   TH1F *st_stack_110 = new TH1F("st_stack_110","",20,0,1);
   st_stack_110->SetMinimum(1385731);
   st_stack_110->SetMaximum(1.138727e+15);
   st_stack_110->SetDirectory(0);
   st_stack_110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_110->SetLineColor(ci);
   st_stack_110->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_110->GetXaxis()->SetRange(1,20);
   st_stack_110->GetXaxis()->SetLabelFont(42);
   st_stack_110->GetXaxis()->SetTitleOffset(1);
   st_stack_110->GetXaxis()->SetTitleFont(42);
   st_stack_110->GetYaxis()->SetTitle("Events/0.05");
   st_stack_110->GetYaxis()->SetLabelFont(42);
   st_stack_110->GetYaxis()->SetTitleSize(0.037);
   st_stack_110->GetYaxis()->SetTitleFont(42);
   st_stack_110->GetZaxis()->SetLabelFont(42);
   st_stack_110->GetZaxis()->SetTitleOffset(1);
   st_stack_110->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_110);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,4.442742e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,2.150005e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,2.939816e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,1.247094e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,7.490623e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,4.723324e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,3.45727e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,2.623505e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,1.998061e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,1.621522e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,1.376125e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,1.152263e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,9.778831e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,8.454625e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,7.625972e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,7.270153e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,6.798052e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,7.004441e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,8.756621e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,3.488837e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,2.631882e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,1.844877e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,6.804008e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,4.428294e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,3.430667e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,2.722304e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,2.328171e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,2.027276e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,1.768155e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,1.591765e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,1.465533e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,1.34012e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,1.233866e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,1.145513e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,1.087186e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,1.059989e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,1.023563e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,1.037471e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,1.157276e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,2.288151e+07);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(1.890565e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CSV_stack_2 = new TH1D("VbbHcc_jets_all_CSV_stack_2","",20,0,1);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,1.593617e+08);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,6.163609e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,1.222652e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,6410564);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,4520823);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,3491510);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,2957099);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,2608087);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,2303553);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,2146189);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,2073884);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,2004142);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,1926678);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,1959653);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,2047643);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,2291858);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,2508838);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,2968092);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,4449907);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,2.728079e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,3275.197);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,2010.124);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,897.8432);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,652.9121);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,548.691);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,481.9846);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,443.2796);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,415.575);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,390.0403);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,376.4191);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,370.4362);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,364.2259);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,357.0259);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,360.0006);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,367.8599);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,389.0063);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,406.7939);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,442.1698);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,541.0846);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,1339.382);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(5.230086e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_all_17->Modified();
   CSV_jets_all_17->cd();
   CSV_jets_all_17->SetSelected(CSV_jets_all_17);
}
