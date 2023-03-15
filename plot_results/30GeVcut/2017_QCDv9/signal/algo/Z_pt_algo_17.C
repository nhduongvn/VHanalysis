#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_17()
{
//=========Macro generated from canvas: Z_pt_algo_17/Z_pt_algo_17
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_17 = new TCanvas("Z_pt_algo_17", "Z_pt_algo_17",0,0,600,600);
   Z_pt_algo_17->SetHighLightColor(2);
   Z_pt_algo_17->Range(37.97653,-0.2794706,1705.96,2.049451);
   Z_pt_algo_17->SetFillColor(0);
   Z_pt_algo_17->SetFillStyle(4000);
   Z_pt_algo_17->SetBorderMode(0);
   Z_pt_algo_17->SetBorderSize(2);
   Z_pt_algo_17->SetLeftMargin(0.15709);
   Z_pt_algo_17->SetRightMargin(0.1234783);
   Z_pt_algo_17->SetBottomMargin(0.12);
   Z_pt_algo_17->SetFrameFillStyle(1000);
   Z_pt_algo_17->SetFrameBorderMode(0);
   Z_pt_algo_17->SetFrameFillStyle(1000);
   Z_pt_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.816559);
   
   TH1F *st_stack_74 = new TH1F("st_stack_74","",40,0,2000);
   st_stack_74->SetMinimum(0);
   st_stack_74->SetMaximum(1.816559);
   st_stack_74->SetDirectory(0);
   st_stack_74->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_74->SetLineColor(ci);
   st_stack_74->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_74->GetXaxis()->SetRange(7,30);
   st_stack_74->GetXaxis()->SetLabelFont(42);
   st_stack_74->GetXaxis()->SetTitleOffset(1);
   st_stack_74->GetXaxis()->SetTitleFont(42);
   st_stack_74->GetYaxis()->SetTitle("Events/50.0");
   st_stack_74->GetYaxis()->SetLabelFont(42);
   st_stack_74->GetYaxis()->SetTitleSize(0.037);
   st_stack_74->GetYaxis()->SetTitleFont(42);
   st_stack_74->GetZaxis()->SetLabelFont(42);
   st_stack_74->GetZaxis()->SetTitleOffset(1);
   st_stack_74->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_74);
   
   
   TH1D *VbbHcc_algo_Z_pt_stack_1 = new TH1D("VbbHcc_algo_Z_pt_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,0.2556267);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,1.211039);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,1.000622);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,0.5485698);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(5,0.3321578);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(6,0.1748466);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(7,0.07543529);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(8,0.06387295);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(9,0.01992331);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(10,0.005923637);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(11,0.004176385);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(12,0.003739981);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(13,0.001753361);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(14,0.001848645);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,0.02169306);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,0.04847072);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,0.04384661);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,0.03237458);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(5,0.02503064);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(6,0.01873494);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(7,0.01215063);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(8,0.010777);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(9,0.006711133);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(10,0.003421007);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(11,0.002989405);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(12,0.002649171);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(13,0.001753361);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(14,0.001848645);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(2177);

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
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,0.03125715);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,0.20589);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,0.4012857);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,0.2201895);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,0.1090026);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,0.04737492);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,0.01727105);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,0.01092708);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,0.00228657);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,0.000391246);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(11,0.000262908);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(12,0.0005044512);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,0.002749572);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,0.007065703);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,0.009878404);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,0.007274549);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,0.0051635);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,0.003345079);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,0.002040789);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,0.001631016);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,0.0007016942);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,0.0002808042);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(11,0.000262908);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(12,0.0003569464);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(4507);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_algo_17->Modified();
   Z_pt_algo_17->cd();
   Z_pt_algo_17->SetSelected(Z_pt_algo_17);
}
