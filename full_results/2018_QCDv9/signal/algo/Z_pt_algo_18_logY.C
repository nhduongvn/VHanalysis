#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_18_logY()
{
//=========Macro generated from canvas: Z_pt_algo_18/Z_pt_algo_18
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_18 = new TCanvas("Z_pt_algo_18", "Z_pt_algo_18",0,0,600,600);
   Z_pt_algo_18->SetHighLightColor(2);
   Z_pt_algo_18->Range(37.97653,0.5956235,1705.96,2.371302);
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
   st->SetMaximum(127.9041);
   
   TH1F *st_stack_67 = new TH1F("st_stack_67","",40,0,2000);
   st_stack_67->SetMinimum(6.437317);
   st_stack_67->SetMaximum(156.2191);
   st_stack_67->SetDirectory(0);
   st_stack_67->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_67->SetLineColor(ci);
   st_stack_67->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_67->GetXaxis()->SetRange(7,30);
   st_stack_67->GetXaxis()->SetLabelFont(42);
   st_stack_67->GetXaxis()->SetTitleOffset(1);
   st_stack_67->GetXaxis()->SetTitleFont(42);
   st_stack_67->GetYaxis()->SetTitle("Events/50.0");
   st_stack_67->GetYaxis()->SetLabelFont(42);
   st_stack_67->GetYaxis()->SetTitleSize(0.037);
   st_stack_67->GetYaxis()->SetTitleFont(42);
   st_stack_67->GetZaxis()->SetLabelFont(42);
   st_stack_67->GetZaxis()->SetTitleOffset(1);
   st_stack_67->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_67);
   
   
   TH1D *VbbHcc_algo_Z_pt_stack_1 = new TH1D("VbbHcc_algo_Z_pt_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,0.2612183);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,1.279041);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,1.011235);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,0.392319);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(5,0.1467358);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(6,0.06919398);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(7,0.05740679);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(8,0.02988815);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(9,0.008392194);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(10,0.007144636);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(11,0.002471056);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,0.02606392);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,0.05895651);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,0.05265575);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,0.03243071);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(5,0.01949919);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(6,0.01392085);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(7,0.01212541);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(8,0.008914632);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(9,0.004901729);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(10,0.004128438);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(11,0.002471056);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(1458);

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
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,0.03318613);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,0.1910133);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,0.3549973);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,0.1680463);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,0.05302845);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,0.02412517);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,0.01086963);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,0.007446015);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,0.00124966);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,0.002185661);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(11,0.0008533341);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(12,0.002000704);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(14,0.001274924);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(15,0.0005579291);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(16,0.0002140083);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(18,0.0007035447);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(19,0.0005019805);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,0.00355018);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,0.008639041);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,0.01182229);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,0.007969126);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,0.004536764);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,0.003048806);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,0.002033508);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,0.001615966);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,0.0006627041);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,0.0008819485);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(11,0.0005446948);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(12,0.000822705);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(14,0.0007423699);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(15,0.0004141816);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(16,0.0002140083);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(18,0.0005226574);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(19,0.0005019805);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(2495);

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
