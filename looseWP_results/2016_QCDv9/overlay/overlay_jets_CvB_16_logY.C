#ifdef __CLING__
#pragma cling optimize(0)
#endif
void overlay_jets_CvB_16_logY()
{
//=========Macro generated from canvas: overlay_jets_CvB_16/overlay_jets_CvB_16
//=========  (Fri Mar 10 12:48:05 2023) by ROOT version 6.26/06
   TCanvas *overlay_jets_CvB_16 = new TCanvas("overlay_jets_CvB_16", "overlay_jets_CvB_16",0,0,600,600);
   gStyle->SetOptStat(0);
   overlay_jets_CvB_16->SetHighLightColor(2);
   overlay_jets_CvB_16->Range(-0.2,-3.42355,1.133333,0.01997939);
   overlay_jets_CvB_16->SetFillColor(0);
   overlay_jets_CvB_16->SetBorderMode(0);
   overlay_jets_CvB_16->SetBorderSize(2);
   overlay_jets_CvB_16->SetLogy();
   overlay_jets_CvB_16->SetLeftMargin(0.15);
   overlay_jets_CvB_16->SetFrameBorderMode(0);
   overlay_jets_CvB_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",20,0,1);
   st_stack_64->SetMinimum(0.0008333025);
   st_stack_64->SetMaximum(0.4738342);
   st_stack_64->SetDirectory(0);
   st_stack_64->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_64->SetLineColor(ci);
   st_stack_64->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_64->GetXaxis()->SetLabelFont(42);
   st_stack_64->GetXaxis()->SetTitleOffset(1);
   st_stack_64->GetXaxis()->SetTitleFont(42);
   st_stack_64->GetYaxis()->SetTitle("Events/0.05");
   st_stack_64->GetYaxis()->SetLabelFont(42);
   st_stack_64->GetYaxis()->SetTitleFont(42);
   st_stack_64->GetZaxis()->SetLabelFont(42);
   st_stack_64->GetZaxis()->SetTitleOffset(1);
   st_stack_64->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_64);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,0.03720946);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,0.008135662);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,0.006381487);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,0.006768597);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,0.007351265);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,0.008051903);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,0.009093908);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,0.0105701);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,0.01310207);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,0.01625314);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,0.01971965);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,0.02386296);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,0.03257353);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,0.04226225);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,0.06051262);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,0.08737761);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,0.133062);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,0.2128805);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,0.2220308);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,0.04280051);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,0.0002361991);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,0.0001109539);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,9.864019e-05);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,0.0001020923);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,0.0001067164);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,0.0001112695);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,0.0001186745);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,0.0001281553);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,0.0001420149);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,0.0001587947);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,0.0001754835);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,0.0001921161);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,0.000224759);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,0.0002550461);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,0.0003053136);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,0.0003660464);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,0.0004499866);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,0.0005678989);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,0.0005838806);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,0.0002542909);
   VbbHcc_jets_CvB_stack_1->SetEntries(1294282);

   ci = TColor::GetColor("#ff0000");
   VbbHcc_jets_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvB_stack_1->SetLineWidth(2);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetRange(1,20);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_CvB_stack_2 = new TH1D("VbbHcc_jets_CvB_stack_2","",20,0,1);
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,0.01266356);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,0.002574498);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,0.001973934);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,0.001991926);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,0.002254713);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,0.002655206);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,0.003184915);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,0.003945152);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,0.005209331);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,0.007457664);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,0.01046032);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,0.01460672);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,0.02178041);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,0.03274829);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,0.0541969);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,0.09284205);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,0.1739457);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,0.3261589);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,0.2118176);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,0.01753219);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,1.688203e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,7.598419e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,6.668123e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,6.709991e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,7.157074e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,7.798042e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,8.566528e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,9.546455e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,1.099267e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,1.318436e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,1.5649e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,1.850918e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,2.261013e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,2.778529e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,3.579295e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,4.695115e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,6.419314e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,8.787476e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,7.164218e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,1.989322e-05);
   VbbHcc_jets_CvB_stack_2->SetEntries(1.996322e+09);

   ci = TColor::GetColor("#ff0000");
   VbbHcc_jets_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvB_stack_2->SetLineStyle(2);
   VbbHcc_jets_CvB_stack_2->SetLineWidth(2);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetRange(1,20);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_2,"");
   st->Draw("nostack,hist");
   
   TLegend *leg = new TLegend(0.6,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvB_stack_1","CvB (signal)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_CvB_stack_2","CvB (bckg)","L");

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
   overlay_jets_CvB_16->Modified();
   overlay_jets_CvB_16->cd();
   overlay_jets_CvB_16->SetSelected(overlay_jets_CvB_16);
}
