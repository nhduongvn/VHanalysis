#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenB_bckg_17()
{
//=========Macro generated from canvas: GenJet_all_nGenB_bckg_17/GenJet_all_nGenB_bckg_17
//=========  (Fri Mar 10 12:49:27 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenB_bckg_17 = new TCanvas("GenJet_all_nGenB_bckg_17", "GenJet_all_nGenB_bckg_17",0,0,600,600);
   GenJet_all_nGenB_bckg_17->SetHighLightColor(2);
   GenJet_all_nGenB_bckg_17->Range(-4.867058,-2.409041e+11,22.93266,1.76663e+12);
   GenJet_all_nGenB_bckg_17->SetFillColor(0);
   GenJet_all_nGenB_bckg_17->SetFillStyle(4000);
   GenJet_all_nGenB_bckg_17->SetBorderMode(0);
   GenJet_all_nGenB_bckg_17->SetBorderSize(2);
   GenJet_all_nGenB_bckg_17->SetLeftMargin(0.15709);
   GenJet_all_nGenB_bckg_17->SetRightMargin(0.1234783);
   GenJet_all_nGenB_bckg_17->SetBottomMargin(0.12);
   GenJet_all_nGenB_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenB_bckg_17->SetFrameBorderMode(0);
   GenJet_all_nGenB_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenB_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.565877e+12);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",20,-0.5,19.5);
   st_stack_16->SetMinimum(0);
   st_stack_16->SetMaximum(1.565877e+12);
   st_stack_16->SetDirectory(0);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetTitleOffset(1);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Event/1.0");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetTitleSize(0.037);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *GenJet_all_nGenB_stack_1 = new TH1D("GenJet_all_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenB_stack_1->SetBinContent(1,1.299678e+12);
   GenJet_all_nGenB_stack_1->SetBinContent(2,6.78278e+10);
   GenJet_all_nGenB_stack_1->SetBinContent(3,4.009267e+10);
   GenJet_all_nGenB_stack_1->SetBinContent(4,2.200034e+09);
   GenJet_all_nGenB_stack_1->SetBinContent(5,3.233597e+08);
   GenJet_all_nGenB_stack_1->SetBinContent(6,2.069511e+07);
   GenJet_all_nGenB_stack_1->SetBinContent(7,1463370);
   GenJet_all_nGenB_stack_1->SetBinContent(8,38476.61);
   GenJet_all_nGenB_stack_1->SetBinContent(9,2608.672);
   GenJet_all_nGenB_stack_1->SetBinContent(10,13.23539);
   GenJet_all_nGenB_stack_1->SetBinError(1,1.444918e+08);
   GenJet_all_nGenB_stack_1->SetBinError(2,3.280771e+07);
   GenJet_all_nGenB_stack_1->SetBinError(3,2.49606e+07);
   GenJet_all_nGenB_stack_1->SetBinError(4,5752576);
   GenJet_all_nGenB_stack_1->SetBinError(5,2147439);
   GenJet_all_nGenB_stack_1->SetBinError(6,527654.1);
   GenJet_all_nGenB_stack_1->SetBinError(7,133467.9);
   GenJet_all_nGenB_stack_1->SetBinError(8,9895.897);
   GenJet_all_nGenB_stack_1->SetBinError(9,1759.692);
   GenJet_all_nGenB_stack_1->SetBinError(10,9.964757);
   GenJet_all_nGenB_stack_1->SetEntries(3.028331e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenB_stack_1->SetFillColor(ci);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenB_stack_1,"");
   
   TH1D *GenJet_all_nGenB_stack_2 = new TH1D("GenJet_all_nGenB_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenB_stack_2->SetBinContent(1,43449.35);
   GenJet_all_nGenB_stack_2->SetBinContent(2,2817948);
   GenJet_all_nGenB_stack_2->SetBinContent(3,3.031727e+07);
   GenJet_all_nGenB_stack_2->SetBinContent(4,2597038);
   GenJet_all_nGenB_stack_2->SetBinContent(5,445295.2);
   GenJet_all_nGenB_stack_2->SetBinContent(6,43862.95);
   GenJet_all_nGenB_stack_2->SetBinContent(7,4765.906);
   GenJet_all_nGenB_stack_2->SetBinContent(8,450.2913);
   GenJet_all_nGenB_stack_2->SetBinContent(9,40.78912);
   GenJet_all_nGenB_stack_2->SetBinContent(10,3.58461);
   GenJet_all_nGenB_stack_2->SetBinContent(11,0.4296103);
   GenJet_all_nGenB_stack_2->SetBinError(1,53.4512);
   GenJet_all_nGenB_stack_2->SetBinError(2,429.6734);
   GenJet_all_nGenB_stack_2->SetBinError(3,1407.507);
   GenJet_all_nGenB_stack_2->SetBinError(4,413.5428);
   GenJet_all_nGenB_stack_2->SetBinError(5,171.5906);
   GenJet_all_nGenB_stack_2->SetBinError(6,54.05004);
   GenJet_all_nGenB_stack_2->SetBinError(7,17.83739);
   GenJet_all_nGenB_stack_2->SetBinError(8,5.497873);
   GenJet_all_nGenB_stack_2->SetBinError(9,1.664012);
   GenJet_all_nGenB_stack_2->SetBinError(10,0.5009664);
   GenJet_all_nGenB_stack_2->SetBinError(11,0.1489474);
   GenJet_all_nGenB_stack_2->SetEntries(6.292104e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenB_stack_2->SetFillColor(ci);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenB_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_all_nGenB_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenB_bckg_17->Modified();
   GenJet_all_nGenB_bckg_17->cd();
   GenJet_all_nGenB_bckg_17->SetSelected(GenJet_all_nGenB_bckg_17);
}
