#ifdef __CLING__
#pragma cling optimize(0)
#endif
void overlay_jets_CvL_18()
{
//=========Macro generated from canvas: overlay_jets_CvL_18/overlay_jets_CvL_18
//=========  (Fri Mar 10 12:34:06 2023) by ROOT version 6.26/06
   TCanvas *overlay_jets_CvL_18 = new TCanvas("overlay_jets_CvL_18", "overlay_jets_CvL_18",0,0,600,600);
   gStyle->SetOptStat(0);
   overlay_jets_CvL_18->SetHighLightColor(2);
   overlay_jets_CvL_18->Range(-0.2,-0.05787766,1.133333,0.5208989);
   overlay_jets_CvL_18->SetFillColor(0);
   overlay_jets_CvL_18->SetBorderMode(0);
   overlay_jets_CvL_18->SetBorderSize(2);
   overlay_jets_CvL_18->SetLeftMargin(0.15);
   overlay_jets_CvL_18->SetFrameBorderMode(0);
   overlay_jets_CvL_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",20,0,1);
   st_stack_63->SetMinimum(0);
   st_stack_63->SetMaximum(0.4630212);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetTitleOffset(1);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Events/0.05");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetTitleOffset(1);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,0.1957315);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,0.2584025);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,0.1009982);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,0.0520457);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,0.03287683);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,0.02471683);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,0.01972755);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,0.01694737);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,0.01517122);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,0.01446011);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,0.01427207);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,0.01357204);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,0.01374545);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,0.01415247);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,0.01536464);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,0.01695429);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,0.01912175);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,0.02361254);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,0.03073299);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,0.107394);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,0.0004228765);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,0.0004820282);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,0.0003000616);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,0.0002137986);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,0.0001677209);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,0.0001441105);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,0.0001358229);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,0.0001192484);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,0.0001124423);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,0.0001099242);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,0.000112819);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,0.00010866);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,0.0001126577);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,0.0001129041);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,0.0001168467);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,0.0001336474);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,0.000132422);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,0.0001430927);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,0.0001672994);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,0.000312568);
   VbbHcc_jets_CvL_stack_1->SetEntries(2581203);

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
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,0.4409726);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,0.3381787);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,0.08612706);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,0.03383385);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,0.01766046);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,0.01119077);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,0.007778204);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,0.005708497);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,0.004561362);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,0.003870005);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,0.003407765);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,0.00305465);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,0.002860249);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,0.002822651);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,0.002954002);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,0.003237602);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,0.003651949);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,0.004495253);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,0.006074286);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,0.01756007);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,9.0886e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,7.784005e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,3.911197e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,2.438138e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,1.774801e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,1.405602e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,1.167232e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,9.951975e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,9.028393e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,8.298223e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,7.95233e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,7.413087e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,7.113695e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,7.186535e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,7.34766e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,7.636224e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,8.092295e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,8.982647e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,1.039076e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,1.785609e-05);
   VbbHcc_jets_CvL_stack_2->SetEntries(3.143429e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   overlay_jets_CvL_18->Modified();
   overlay_jets_CvL_18->cd();
   overlay_jets_CvL_18->SetSelected(overlay_jets_CvL_18);
}
