#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_signal_18()
{
//=========Macro generated from canvas: Z_mass_signal_18/Z_mass_signal_18
//=========  (Thu Mar 23 11:54:00 2023) by ROOT version 6.26/06
   TCanvas *Z_mass_signal_18 = new TCanvas("Z_mass_signal_18", "Z_mass_signal_18",0,0,600,600);
   Z_mass_signal_18->SetHighLightColor(2);
   Z_mass_signal_18->Range(-65.50587,-49.0471,351.4899,359.6788);
   Z_mass_signal_18->SetFillColor(0);
   Z_mass_signal_18->SetFillStyle(4000);
   Z_mass_signal_18->SetBorderMode(0);
   Z_mass_signal_18->SetBorderSize(2);
   Z_mass_signal_18->SetLeftMargin(0.15709);
   Z_mass_signal_18->SetRightMargin(0.1234783);
   Z_mass_signal_18->SetBottomMargin(0.12);
   Z_mass_signal_18->SetFrameFillStyle(1000);
   Z_mass_signal_18->SetFrameBorderMode(0);
   Z_mass_signal_18->SetFrameFillStyle(1000);
   Z_mass_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(318.8062);
   
   TH1F *st_stack_29 = new TH1F("st_stack_29","",200,0,400);
   st_stack_29->SetMinimum(0);
   st_stack_29->SetMaximum(318.8062);
   st_stack_29->SetDirectory(0);
   st_stack_29->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_29->SetLineColor(ci);
   st_stack_29->GetXaxis()->SetTitle("M_{Z} [GeV]");
   st_stack_29->GetXaxis()->SetRange(1,150);
   st_stack_29->GetXaxis()->SetLabelFont(42);
   st_stack_29->GetXaxis()->SetTitleOffset(1);
   st_stack_29->GetXaxis()->SetTitleFont(42);
   st_stack_29->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_29->GetYaxis()->SetLabelFont(42);
   st_stack_29->GetYaxis()->SetTitleSize(0.037);
   st_stack_29->GetYaxis()->SetTitleFont(42);
   st_stack_29->GetZaxis()->SetLabelFont(42);
   st_stack_29->GetZaxis()->SetTitleOffset(1);
   st_stack_29->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_29);
   
   
   TH1D *VbbHcc_MC_Z_mass_stack_1 = new TH1D("VbbHcc_MC_Z_mass_stack_1","",200,0,400);
   VbbHcc_MC_Z_mass_stack_1->SetBinContent(1,264.6091);
   VbbHcc_MC_Z_mass_stack_1->SetBinError(1,0.9255166);
   VbbHcc_MC_Z_mass_stack_1->SetEntries(108766);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_Z_mass_stack_1->SetFillColor(ci);
   VbbHcc_MC_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_MC_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_MC_Z_mass_stack_2 = new TH1D("VbbHcc_MC_Z_mass_stack_2","",200,0,400);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(64,0.0004199154);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(74,0.0004346981);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(87,0.0003895316);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(94,0.0006333916);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(101,0.0003228833);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(102,0.0007832408);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(105,0.0005746843);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(108,0.0007989801);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(112,0.0003334233);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(113,0.0002076332);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(118,0.0006645967);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(120,0.000320559);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(121,0.0005845714);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(134,0.0002938073);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(137,0.0005085285);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(141,0.0003334233);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(146,0.000320559);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(147,0.00043985);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(149,0.0001863491);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(150,0.0002658739);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(170,0.0004389172);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(175,0.0004049829);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(177,0.0006481781);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(179,0.0008111696);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(180,0.001051532);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(188,0.0004199154);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(189,0.0002938073);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(192,0.0002658739);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(193,0.0004199154);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(194,0.0002481348);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(196,0.0003290641);
   VbbHcc_MC_Z_mass_stack_2->SetBinContent(201,36.85135);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(64,0.0004199154);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(74,0.0004346981);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(87,0.0003895316);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(94,0.000447961);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(101,0.0003228833);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(102,0.0005655895);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(105,0.000406466);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(108,0.000574381);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(112,0.0003334233);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(113,0.0002076332);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(118,0.0004705309);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(120,0.000320559);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(121,0.0004150386);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(134,0.0002938073);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(137,0.0005085285);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(141,0.0003334233);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(146,0.000320559);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(147,0.00043985);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(149,0.0001863491);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(150,0.0002658739);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(170,0.0004389172);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(175,0.0004049829);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(177,0.0004583311);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(179,0.0005753128);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(180,0.0006091153);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(188,0.0004199154);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(189,0.0002938073);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(192,0.0002658739);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(193,0.0004199154);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(194,0.0002481348);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(196,0.0003290641);
   VbbHcc_MC_Z_mass_stack_2->SetBinError(201,0.1238144);
   VbbHcc_MC_Z_mass_stack_2->SetEntries(108071);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_Z_mass_stack_2->SetFillColor(ci);
   VbbHcc_MC_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_MC_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_mass_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_mass_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Z_mass_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_Z_mass_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_MC_Z_mass_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_signal_18->Modified();
   Z_mass_signal_18->cd();
   Z_mass_signal_18->SetSelected(Z_mass_signal_18);
}
