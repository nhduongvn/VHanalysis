#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenJet_bckg_17()
{
//=========Macro generated from canvas: GenJet_cuts_nGenJet_bckg_17/GenJet_cuts_nGenJet_bckg_17
//=========  (Thu Mar  9 15:52:37 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenJet_bckg_17 = new TCanvas("GenJet_cuts_nGenJet_bckg_17", "GenJet_cuts_nGenJet_bckg_17",0,0,600,600);
   GenJet_cuts_nGenJet_bckg_17->SetHighLightColor(2);
   GenJet_cuts_nGenJet_bckg_17->Range(-4.867058,-1.178543e+11,22.93266,8.642651e+11);
   GenJet_cuts_nGenJet_bckg_17->SetFillColor(0);
   GenJet_cuts_nGenJet_bckg_17->SetFillStyle(4000);
   GenJet_cuts_nGenJet_bckg_17->SetBorderMode(0);
   GenJet_cuts_nGenJet_bckg_17->SetBorderSize(2);
   GenJet_cuts_nGenJet_bckg_17->SetLeftMargin(0.15709);
   GenJet_cuts_nGenJet_bckg_17->SetRightMargin(0.1234783);
   GenJet_cuts_nGenJet_bckg_17->SetBottomMargin(0.12);
   GenJet_cuts_nGenJet_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenJet_bckg_17->SetFrameBorderMode(0);
   GenJet_cuts_nGenJet_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenJet_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(7.660531e+11);
   
   TH1F *st_stack_76 = new TH1F("st_stack_76","",20,-0.5,19.5);
   st_stack_76->SetMinimum(0);
   st_stack_76->SetMaximum(7.660531e+11);
   st_stack_76->SetDirectory(0);
   st_stack_76->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_76->SetLineColor(ci);
   st_stack_76->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_76->GetXaxis()->SetLabelFont(42);
   st_stack_76->GetXaxis()->SetTitleOffset(1);
   st_stack_76->GetXaxis()->SetTitleFont(42);
   st_stack_76->GetYaxis()->SetTitle("Event/1.0");
   st_stack_76->GetYaxis()->SetLabelFont(42);
   st_stack_76->GetYaxis()->SetTitleSize(0.037);
   st_stack_76->GetYaxis()->SetTitleFont(42);
   st_stack_76->GetZaxis()->SetLabelFont(42);
   st_stack_76->GetZaxis()->SetTitleOffset(1);
   st_stack_76->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_76);
   
   
   TH1D *GenJet_cuts_nGenJet_stack_1 = new TH1D("GenJet_cuts_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(1,6.358235e+11);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(2,5.054517e+11);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(3,2.492617e+11);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(4,1.692253e+10);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(5,2.355706e+09);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(6,2.820065e+08);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(7,3.91148e+07);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(8,5680132);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(9,839300.2);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(10,123368.7);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(11,18134.53);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(12,2362.027);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(13,374.0582);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(14,50.1978);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(15,9.730494);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(16,0.4165312);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(17,0.4552667);
   GenJet_cuts_nGenJet_stack_1->SetBinError(1,1.042346e+08);
   GenJet_cuts_nGenJet_stack_1->SetBinError(2,9.103987e+07);
   GenJet_cuts_nGenJet_stack_1->SetBinError(3,5.899401e+07);
   GenJet_cuts_nGenJet_stack_1->SetBinError(4,7506165);
   GenJet_cuts_nGenJet_stack_1->SetBinError(5,1586717);
   GenJet_cuts_nGenJet_stack_1->SetBinError(6,324265.2);
   GenJet_cuts_nGenJet_stack_1->SetBinError(7,79513.07);
   GenJet_cuts_nGenJet_stack_1->SetBinError(8,21834.18);
   GenJet_cuts_nGenJet_stack_1->SetBinError(9,6025.712);
   GenJet_cuts_nGenJet_stack_1->SetBinError(10,1769.265);
   GenJet_cuts_nGenJet_stack_1->SetBinError(11,379.2219);
   GenJet_cuts_nGenJet_stack_1->SetBinError(12,111.4863);
   GenJet_cuts_nGenJet_stack_1->SetBinError(13,40.68015);
   GenJet_cuts_nGenJet_stack_1->SetBinError(14,10.46268);
   GenJet_cuts_nGenJet_stack_1->SetBinError(15,5.764576);
   GenJet_cuts_nGenJet_stack_1->SetBinError(16,0.2947486);
   GenJet_cuts_nGenJet_stack_1->SetBinError(17,0.4552667);
   GenJet_cuts_nGenJet_stack_1->SetEntries(3.060973e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_cuts_nGenJet_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenJet_stack_1,"");
   
   TH1D *GenJet_cuts_nGenJet_stack_2 = new TH1D("GenJet_cuts_nGenJet_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(1,628544.9);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(2,3287338);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(3,8362050);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(4,1.07326e+07);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(5,7869530);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(6,3643783);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(7,1268503);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(8,361746);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(9,90348.01);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(10,20425.17);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(11,4261.502);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(12,849.8314);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(13,153.5139);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(14,27.85931);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(15,4.002608);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(16,0.4886486);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(17,0.2652183);
   GenJet_cuts_nGenJet_stack_2->SetBinError(1,188.0188);
   GenJet_cuts_nGenJet_stack_2->SetBinError(2,437.2331);
   GenJet_cuts_nGenJet_stack_2->SetBinError(3,720.9091);
   GenJet_cuts_nGenJet_stack_2->SetBinError(4,842.2696);
   GenJet_cuts_nGenJet_stack_2->SetBinError(5,741.0488);
   GenJet_cuts_nGenJet_stack_2->SetBinError(6,513.0305);
   GenJet_cuts_nGenJet_stack_2->SetBinError(7,305.9083);
   GenJet_cuts_nGenJet_stack_2->SetBinError(8,164.1582);
   GenJet_cuts_nGenJet_stack_2->SetBinError(9,82.29506);
   GenJet_cuts_nGenJet_stack_2->SetBinError(10,39.18841);
   GenJet_cuts_nGenJet_stack_2->SetBinError(11,17.88837);
   GenJet_cuts_nGenJet_stack_2->SetBinError(12,8.014422);
   GenJet_cuts_nGenJet_stack_2->SetBinError(13,3.408911);
   GenJet_cuts_nGenJet_stack_2->SetBinError(14,1.471125);
   GenJet_cuts_nGenJet_stack_2->SetBinError(15,0.5385805);
   GenJet_cuts_nGenJet_stack_2->SetBinError(16,0.1943581);
   GenJet_cuts_nGenJet_stack_2->SetBinError(17,0.1426128);
   GenJet_cuts_nGenJet_stack_2->SetEntries(6.227592e+08);

   ci = TColor::GetColor("#990099");
   GenJet_cuts_nGenJet_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenJet_stack_1","QCD","F");

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
   GenJet_cuts_nGenJet_bckg_17->Modified();
   GenJet_cuts_nGenJet_bckg_17->cd();
   GenJet_cuts_nGenJet_bckg_17->SetSelected(GenJet_cuts_nGenJet_bckg_17);
}
