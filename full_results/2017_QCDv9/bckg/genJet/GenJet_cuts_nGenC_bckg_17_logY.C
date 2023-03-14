#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenC_bckg_17_logY()
{
//=========Macro generated from canvas: GenJet_cuts_nGenC_bckg_17/GenJet_cuts_nGenC_bckg_17
//=========  (Thu Mar  9 15:52:23 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenC_bckg_17 = new TCanvas("GenJet_cuts_nGenC_bckg_17", "GenJet_cuts_nGenC_bckg_17",0,0,600,600);
   GenJet_cuts_nGenC_bckg_17->SetHighLightColor(2);
   GenJet_cuts_nGenC_bckg_17->Range(-4.867058,-2.942855,22.93266,14.48558);
   GenJet_cuts_nGenC_bckg_17->SetFillColor(0);
   GenJet_cuts_nGenC_bckg_17->SetFillStyle(4000);
   GenJet_cuts_nGenC_bckg_17->SetBorderMode(0);
   GenJet_cuts_nGenC_bckg_17->SetBorderSize(2);
   GenJet_cuts_nGenC_bckg_17->SetLogy();
   GenJet_cuts_nGenC_bckg_17->SetLeftMargin(0.15709);
   GenJet_cuts_nGenC_bckg_17->SetRightMargin(0.1234783);
   GenJet_cuts_nGenC_bckg_17->SetBottomMargin(0.12);
   GenJet_cuts_nGenC_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenC_bckg_17->SetFrameBorderMode(0);
   GenJet_cuts_nGenC_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenC_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(1.60704e+12);
   
   TH1F *st_stack_94 = new TH1F("st_stack_94","",20,-0.5,19.5);
   st_stack_94->SetMinimum(0.1407853);
   st_stack_94->SetMaximum(5.530156e+12);
   st_stack_94->SetDirectory(0);
   st_stack_94->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_94->SetLineColor(ci);
   st_stack_94->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_94->GetXaxis()->SetLabelFont(42);
   st_stack_94->GetXaxis()->SetTitleOffset(1);
   st_stack_94->GetXaxis()->SetTitleFont(42);
   st_stack_94->GetYaxis()->SetTitle("Event/1.0");
   st_stack_94->GetYaxis()->SetLabelFont(42);
   st_stack_94->GetYaxis()->SetTitleSize(0.037);
   st_stack_94->GetYaxis()->SetTitleFont(42);
   st_stack_94->GetZaxis()->SetLabelFont(42);
   st_stack_94->GetZaxis()->SetTitleOffset(1);
   st_stack_94->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_94);
   
   
   TH1D *GenJet_cuts_nGenC_stack_1 = new TH1D("GenJet_cuts_nGenC_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenC_stack_1->SetBinContent(1,1.33382e+12);
   GenJet_cuts_nGenC_stack_1->SetBinContent(2,7.262279e+10);
   GenJet_cuts_nGenC_stack_1->SetBinContent(3,3.639083e+09);
   GenJet_cuts_nGenC_stack_1->SetBinContent(4,5.929679e+07);
   GenJet_cuts_nGenC_stack_1->SetBinContent(5,2010382);
   GenJet_cuts_nGenC_stack_1->SetBinContent(6,57632.07);
   GenJet_cuts_nGenC_stack_1->SetBinContent(7,1701.356);
   GenJet_cuts_nGenC_stack_1->SetBinContent(8,67.05749);
   GenJet_cuts_nGenC_stack_1->SetBinContent(9,0.4707361);
   GenJet_cuts_nGenC_stack_1->SetBinError(1,1.469295e+08);
   GenJet_cuts_nGenC_stack_1->SetBinError(2,3.258387e+07);
   GenJet_cuts_nGenC_stack_1->SetBinError(3,6498358);
   GenJet_cuts_nGenC_stack_1->SetBinError(4,378369.6);
   GenJet_cuts_nGenC_stack_1->SetBinError(5,37565.6);
   GenJet_cuts_nGenC_stack_1->SetBinError(6,3947.921);
   GenJet_cuts_nGenC_stack_1->SetBinError(7,445.3162);
   GenJet_cuts_nGenC_stack_1->SetBinError(8,37.05465);
   GenJet_cuts_nGenC_stack_1->SetBinError(9,0.4707361);
   GenJet_cuts_nGenC_stack_1->SetEntries(3.060973e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_cuts_nGenC_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenC_stack_1,"");
   
   TH1D *GenJet_cuts_nGenC_stack_2 = new TH1D("GenJet_cuts_nGenC_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenC_stack_2->SetBinContent(1,2.372035e+07);
   GenJet_cuts_nGenC_stack_2->SetBinContent(2,1.086012e+07);
   GenJet_cuts_nGenC_stack_2->SetBinContent(3,1595347);
   GenJet_cuts_nGenC_stack_2->SetBinContent(4,88886.14);
   GenJet_cuts_nGenC_stack_2->SetBinContent(5,5182.12);
   GenJet_cuts_nGenC_stack_2->SetBinContent(6,263.1708);
   GenJet_cuts_nGenC_stack_2->SetBinContent(7,12.72153);
   GenJet_cuts_nGenC_stack_2->SetBinContent(8,0.6143289);
   GenJet_cuts_nGenC_stack_2->SetBinContent(9,0.05099839);
   GenJet_cuts_nGenC_stack_2->SetBinError(1,1219.651);
   GenJet_cuts_nGenC_stack_2->SetBinError(2,880.3851);
   GenJet_cuts_nGenC_stack_2->SetBinError(3,356.5577);
   GenJet_cuts_nGenC_stack_2->SetBinError(4,83.93809);
   GenJet_cuts_nGenC_stack_2->SetBinError(5,20.30324);
   GenJet_cuts_nGenC_stack_2->SetBinError(6,4.564558);
   GenJet_cuts_nGenC_stack_2->SetBinError(7,0.9887948);
   GenJet_cuts_nGenC_stack_2->SetBinError(8,0.2170227);
   GenJet_cuts_nGenC_stack_2->SetBinError(9,0.05099839);
   GenJet_cuts_nGenC_stack_2->SetEntries(6.227592e+08);

   ci = TColor::GetColor("#990099");
   GenJet_cuts_nGenC_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenC_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenC_stack_1","QCD","F");

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
   GenJet_cuts_nGenC_bckg_17->Modified();
   GenJet_cuts_nGenC_bckg_17->cd();
   GenJet_cuts_nGenC_bckg_17->SetSelected(GenJet_cuts_nGenC_bckg_17);
}
