#ifdef __CLING__
#pragma cling optimize(0)
#endif
void overlay_jets_CvL_16_logY()
{
//=========Macro generated from canvas: overlay_jets_CvL_16/overlay_jets_CvL_16
//=========  (Wed Mar  1 15:14:08 2023) by ROOT version 6.26/06
   TCanvas *overlay_jets_CvL_16 = new TCanvas("overlay_jets_CvL_16", "overlay_jets_CvL_16",0,0,600,600);
   gStyle->SetOptStat(0);
   overlay_jets_CvL_16->SetHighLightColor(2);
   overlay_jets_CvL_16->Range(-0.2,-3.304928,1.133333,0.1024544);
   overlay_jets_CvL_16->SetFillColor(0);
   overlay_jets_CvL_16->SetBorderMode(0);
   overlay_jets_CvL_16->SetBorderSize(2);
   overlay_jets_CvL_16->SetLogy();
   overlay_jets_CvL_16->SetLeftMargin(0.15);
   overlay_jets_CvL_16->SetFrameBorderMode(0);
   overlay_jets_CvL_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",20,0,1);
   st_stack_61->SetMinimum(0.001085952);
   st_stack_61->SetMaximum(0.5777183);
   st_stack_61->SetDirectory(0);
   st_stack_61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_61->SetLineColor(ci);
   st_stack_61->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_61->GetXaxis()->SetLabelFont(42);
   st_stack_61->GetXaxis()->SetTitleOffset(1);
   st_stack_61->GetXaxis()->SetTitleFont(42);
   st_stack_61->GetYaxis()->SetTitle("Events/0.05");
   st_stack_61->GetYaxis()->SetLabelFont(42);
   st_stack_61->GetYaxis()->SetTitleFont(42);
   st_stack_61->GetZaxis()->SetLabelFont(42);
   st_stack_61->GetZaxis()->SetTitleOffset(1);
   st_stack_61->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_61);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,0.1818069);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,0.2903136);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,0.1207733);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,0.06095972);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,0.03787768);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,0.0270072);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,0.02167563);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,0.0177958);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,0.01619265);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,0.01485465);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,0.01409543);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,0.01338616);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,0.01279811);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,0.01286763);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,0.01382425);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,0.01526572);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,0.01658712);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,0.0193253);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,0.02423263);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,0.06836048);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,0.0005229017);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,0.000664864);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,0.0004304161);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,0.0003067807);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,0.0002419738);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,0.0002051525);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,0.0001838565);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,0.0001663596);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,0.0001581068);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,0.0001518602);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,0.0001479315);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,0.0001439497);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,0.000140676);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,0.0001406777);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,0.0001461472);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,0.0001533895);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,0.0001595533);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,0.0001716456);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,0.000192277);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,0.0003240124);
   VbbHcc_jets_CvL_stack_1->SetEntries(1294282);

   ci = TColor::GetColor("#ff0000");
   VbbHcc_jets_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_1->SetLineWidth(2);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetRange(1,20);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_CvL_stack_2 = new TH1D("VbbHcc_jets_CvL_stack_2","",20,0,1);
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,0.3990336);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,0.3750601);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,0.09879103);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,0.03729961);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,0.01865325);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,0.01145853);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,0.007710564);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,0.005531377);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,0.004335093);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,0.003628543);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,0.003141126);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,0.002771184);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,0.002605031);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,0.002557398);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,0.002651812);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,0.002854948);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,0.003161315);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,0.003807218);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,0.004797731);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,0.0101506);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,9.775933e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,9.398269e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,4.80336e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,2.943324e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,2.079616e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,1.629032e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,1.33657e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,1.131662e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,1.001527e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,9.162688e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,8.516492e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,7.986962e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,7.741011e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,7.663676e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,7.800187e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,8.082396e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,8.483923e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,9.286762e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,1.039389e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,1.517834e-05);
   VbbHcc_jets_CvL_stack_2->SetEntries(1.9762e+09);

   ci = TColor::GetColor("#ff0000");
   VbbHcc_jets_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_2->SetLineStyle(2);
   VbbHcc_jets_CvL_stack_2->SetLineWidth(2);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetRange(1,20);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_2,"");
   st->Draw("nostack,hist");
   
   TLegend *leg = new TLegend(0.6,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvL_stack_1","CvL (signal)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_CvL_stack_2","CvL (bckg)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
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
   overlay_jets_CvL_16->Modified();
   overlay_jets_CvL_16->cd();
   overlay_jets_CvL_16->SetSelected(overlay_jets_CvL_16);
}
