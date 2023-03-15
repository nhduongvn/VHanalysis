#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenJet_bckg_16()
{
//=========Macro generated from canvas: GenJet_cuts_nGenJet_bckg_16/GenJet_cuts_nGenJet_bckg_16
//=========  (Thu Mar  9 15:52:37 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenJet_bckg_16 = new TCanvas("GenJet_cuts_nGenJet_bckg_16", "GenJet_cuts_nGenJet_bckg_16",0,0,600,600);
   GenJet_cuts_nGenJet_bckg_16->SetHighLightColor(2);
   GenJet_cuts_nGenJet_bckg_16->Range(-4.867058,-9.60427e+10,22.93266,7.043131e+11);
   GenJet_cuts_nGenJet_bckg_16->SetFillColor(0);
   GenJet_cuts_nGenJet_bckg_16->SetFillStyle(4000);
   GenJet_cuts_nGenJet_bckg_16->SetBorderMode(0);
   GenJet_cuts_nGenJet_bckg_16->SetBorderSize(2);
   GenJet_cuts_nGenJet_bckg_16->SetLeftMargin(0.15709);
   GenJet_cuts_nGenJet_bckg_16->SetRightMargin(0.1234783);
   GenJet_cuts_nGenJet_bckg_16->SetBottomMargin(0.12);
   GenJet_cuts_nGenJet_bckg_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenJet_bckg_16->SetFrameBorderMode(0);
   GenJet_cuts_nGenJet_bckg_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenJet_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6.242776e+11);
   
   TH1F *st_stack_74 = new TH1F("st_stack_74","",20,-0.5,19.5);
   st_stack_74->SetMinimum(0);
   st_stack_74->SetMaximum(6.242776e+11);
   st_stack_74->SetDirectory(0);
   st_stack_74->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_74->SetLineColor(ci);
   st_stack_74->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_74->GetXaxis()->SetLabelFont(42);
   st_stack_74->GetXaxis()->SetTitleOffset(1);
   st_stack_74->GetXaxis()->SetTitleFont(42);
   st_stack_74->GetYaxis()->SetTitle("Event/1.0");
   st_stack_74->GetYaxis()->SetLabelFont(42);
   st_stack_74->GetYaxis()->SetTitleSize(0.037);
   st_stack_74->GetYaxis()->SetTitleFont(42);
   st_stack_74->GetZaxis()->SetLabelFont(42);
   st_stack_74->GetZaxis()->SetTitleOffset(1);
   st_stack_74->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_74);
   
   
   TH1D *GenJet_cuts_nGenJet_stack_1 = new TH1D("GenJet_cuts_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(1,5.181498e+11);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(2,4.135325e+11);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(3,2.043916e+11);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(4,1.418987e+10);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(5,2.029289e+09);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(6,2.487555e+08);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(7,3.46772e+07);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(8,5054161);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(9,755515.1);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(10,109346.5);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(11,16235.02);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(12,2219.192);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(13,354.0942);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(14,46.18869);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(15,8.315652);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(16,0.4487702);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(17,0.4764029);
   GenJet_cuts_nGenJet_stack_1->SetBinError(1,1.070274e+08);
   GenJet_cuts_nGenJet_stack_1->SetBinError(2,9.364561e+07);
   GenJet_cuts_nGenJet_stack_1->SetBinError(3,6.062526e+07);
   GenJet_cuts_nGenJet_stack_1->SetBinError(4,7586622);
   GenJet_cuts_nGenJet_stack_1->SetBinError(5,1552772);
   GenJet_cuts_nGenJet_stack_1->SetBinError(6,320879);
   GenJet_cuts_nGenJet_stack_1->SetBinError(7,74470.74);
   GenJet_cuts_nGenJet_stack_1->SetBinError(8,20571.1);
   GenJet_cuts_nGenJet_stack_1->SetBinError(9,5901.881);
   GenJet_cuts_nGenJet_stack_1->SetBinError(10,1558.752);
   GenJet_cuts_nGenJet_stack_1->SetBinError(11,532.7058);
   GenJet_cuts_nGenJet_stack_1->SetBinError(12,109.092);
   GenJet_cuts_nGenJet_stack_1->SetBinError(13,41.5928);
   GenJet_cuts_nGenJet_stack_1->SetBinError(14,8.684726);
   GenJet_cuts_nGenJet_stack_1->SetBinError(15,4.69594);
   GenJet_cuts_nGenJet_stack_1->SetBinError(16,0.3175618);
   GenJet_cuts_nGenJet_stack_1->SetBinError(17,0.4764029);
   GenJet_cuts_nGenJet_stack_1->SetEntries(2.425785e+08);

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
   GenJet_cuts_nGenJet_stack_2->SetBinContent(1,522999.5);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(2,2724514);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(3,6890461);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(4,8824930);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(5,6465275);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(6,2997294);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(7,1045469);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(8,298762.4);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(9,74870.73);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(10,16877.37);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(11,3543.588);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(12,685.6956);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(13,129.3875);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(14,22.53163);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(15,3.859695);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(16,0.2842724);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(17,0.16111);
   GenJet_cuts_nGenJet_stack_2->SetBinError(1,169.4629);
   GenJet_cuts_nGenJet_stack_2->SetBinError(2,391.8543);
   GenJet_cuts_nGenJet_stack_2->SetBinError(3,639.968);
   GenJet_cuts_nGenJet_stack_2->SetBinError(4,742.9187);
   GenJet_cuts_nGenJet_stack_2->SetBinError(5,650.5759);
   GenJet_cuts_nGenJet_stack_2->SetBinError(6,449.6001);
   GenJet_cuts_nGenJet_stack_2->SetBinError(7,267.9886);
   GenJet_cuts_nGenJet_stack_2->SetBinError(8,143.918);
   GenJet_cuts_nGenJet_stack_2->SetBinError(9,72.24288);
   GenJet_cuts_nGenJet_stack_2->SetBinError(10,34.35184);
   GenJet_cuts_nGenJet_stack_2->SetBinError(11,15.75463);
   GenJet_cuts_nGenJet_stack_2->SetBinError(12,6.914403);
   GenJet_cuts_nGenJet_stack_2->SetBinError(13,3.01214);
   GenJet_cuts_nGenJet_stack_2->SetBinError(14,1.255132);
   GenJet_cuts_nGenJet_stack_2->SetBinError(15,0.5214367);
   GenJet_cuts_nGenJet_stack_2->SetBinError(16,0.1438823);
   GenJet_cuts_nGenJet_stack_2->SetBinError(17,0.1141024);
   GenJet_cuts_nGenJet_stack_2->SetEntries(5.166267e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenJet_bckg_16->Modified();
   GenJet_cuts_nGenJet_bckg_16->cd();
   GenJet_cuts_nGenJet_bckg_16->SetSelected(GenJet_cuts_nGenJet_bckg_16);
}
