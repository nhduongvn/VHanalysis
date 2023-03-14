#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenL_bckg_16()
{
//=========Macro generated from canvas: GenJet_all_nGenL_bckg_16/GenJet_all_nGenL_bckg_16
//=========  (Thu Mar  9 15:52:35 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenL_bckg_16 = new TCanvas("GenJet_all_nGenL_bckg_16", "GenJet_all_nGenL_bckg_16",0,0,600,600);
   GenJet_all_nGenL_bckg_16->SetHighLightColor(2);
   GenJet_all_nGenL_bckg_16->Range(-4.867058,-8.045625e+10,22.93266,5.900125e+11);
   GenJet_all_nGenL_bckg_16->SetFillColor(0);
   GenJet_all_nGenL_bckg_16->SetFillStyle(4000);
   GenJet_all_nGenL_bckg_16->SetBorderMode(0);
   GenJet_all_nGenL_bckg_16->SetBorderSize(2);
   GenJet_all_nGenL_bckg_16->SetLeftMargin(0.15709);
   GenJet_all_nGenL_bckg_16->SetRightMargin(0.1234783);
   GenJet_all_nGenL_bckg_16->SetBottomMargin(0.12);
   GenJet_all_nGenL_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenL_bckg_16->SetFrameBorderMode(0);
   GenJet_all_nGenL_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenL_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.229656e+11);
   
   TH1F *st_stack_8 = new TH1F("st_stack_8","",20,-0.5,19.5);
   st_stack_8->SetMinimum(0);
   st_stack_8->SetMaximum(5.229656e+11);
   st_stack_8->SetDirectory(0);
   st_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_8->SetLineColor(ci);
   st_stack_8->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_8->GetXaxis()->SetLabelFont(42);
   st_stack_8->GetXaxis()->SetTitleOffset(1);
   st_stack_8->GetXaxis()->SetTitleFont(42);
   st_stack_8->GetYaxis()->SetTitle("Event/1.0");
   st_stack_8->GetYaxis()->SetLabelFont(42);
   st_stack_8->GetYaxis()->SetTitleSize(0.037);
   st_stack_8->GetYaxis()->SetTitleFont(42);
   st_stack_8->GetZaxis()->SetLabelFont(42);
   st_stack_8->GetZaxis()->SetTitleOffset(1);
   st_stack_8->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_8);
   
   
   TH1D *GenJet_all_nGenL_stack_1 = new TH1D("GenJet_all_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenL_stack_1->SetBinContent(1,3.999291e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(2,4.340593e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(3,2.139545e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(4,7.523816e+10);
   GenJet_all_nGenL_stack_1->SetBinContent(5,2.177229e+10);
   GenJet_all_nGenL_stack_1->SetBinContent(6,5.724433e+09);
   GenJet_all_nGenL_stack_1->SetBinContent(7,1.433909e+09);
   GenJet_all_nGenL_stack_1->SetBinContent(8,3.564936e+08);
   GenJet_all_nGenL_stack_1->SetBinContent(9,8.635331e+07);
   GenJet_all_nGenL_stack_1->SetBinContent(10,2.118054e+07);
   GenJet_all_nGenL_stack_1->SetBinContent(11,4884715);
   GenJet_all_nGenL_stack_1->SetBinContent(12,1210046);
   GenJet_all_nGenL_stack_1->SetBinContent(13,364829.6);
   GenJet_all_nGenL_stack_1->SetBinContent(14,85638.71);
   GenJet_all_nGenL_stack_1->SetBinContent(15,65098.9);
   GenJet_all_nGenL_stack_1->SetBinContent(16,301.9127);
   GenJet_all_nGenL_stack_1->SetBinError(1,9.201153e+07);
   GenJet_all_nGenL_stack_1->SetBinError(2,9.496317e+07);
   GenJet_all_nGenL_stack_1->SetBinError(3,6.616851e+07);
   GenJet_all_nGenL_stack_1->SetBinError(4,3.894215e+07);
   GenJet_all_nGenL_stack_1->SetBinError(5,2.078391e+07);
   GenJet_all_nGenL_stack_1->SetBinError(6,1.058844e+07);
   GenJet_all_nGenL_stack_1->SetBinError(7,5272482);
   GenJet_all_nGenL_stack_1->SetBinError(8,2626273);
   GenJet_all_nGenL_stack_1->SetBinError(9,1289765);
   GenJet_all_nGenL_stack_1->SetBinError(10,637116.2);
   GenJet_all_nGenL_stack_1->SetBinError(11,305541.2);
   GenJet_all_nGenL_stack_1->SetBinError(12,149241.8);
   GenJet_all_nGenL_stack_1->SetBinError(13,84975.48);
   GenJet_all_nGenL_stack_1->SetBinError(14,38446.19);
   GenJet_all_nGenL_stack_1->SetBinError(15,35865.17);
   GenJet_all_nGenL_stack_1->SetBinError(16,275.0585);
   GenJet_all_nGenL_stack_1->SetEntries(2.425785e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenL_stack_1->SetFillColor(ci);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenL_stack_1,"");
   
   TH1D *GenJet_all_nGenL_stack_2 = new TH1D("GenJet_all_nGenL_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenL_stack_2->SetBinContent(1,188676.3);
   GenJet_all_nGenL_stack_2->SetBinContent(2,2140077);
   GenJet_all_nGenL_stack_2->SetBinContent(3,7407243);
   GenJet_all_nGenL_stack_2->SetBinContent(4,9223233);
   GenJet_all_nGenL_stack_2->SetBinContent(5,6315361);
   GenJet_all_nGenL_stack_2->SetBinContent(6,2974257);
   GenJet_all_nGenL_stack_2->SetBinContent(7,1113432);
   GenJet_all_nGenL_stack_2->SetBinContent(8,359782.8);
   GenJet_all_nGenL_stack_2->SetBinContent(9,105169.7);
   GenJet_all_nGenL_stack_2->SetBinContent(10,28695.87);
   GenJet_all_nGenL_stack_2->SetBinContent(11,7454.092);
   GenJet_all_nGenL_stack_2->SetBinContent(12,1866.02);
   GenJet_all_nGenL_stack_2->SetBinContent(13,450.8927);
   GenJet_all_nGenL_stack_2->SetBinContent(14,108.5515);
   GenJet_all_nGenL_stack_2->SetBinContent(15,26.20792);
   GenJet_all_nGenL_stack_2->SetBinContent(16,4.644437);
   GenJet_all_nGenL_stack_2->SetBinContent(17,1.445172);
   GenJet_all_nGenL_stack_2->SetBinContent(18,0.1537466);
   GenJet_all_nGenL_stack_2->SetBinContent(19,0.1055159);
   GenJet_all_nGenL_stack_2->SetBinError(1,101.6733);
   GenJet_all_nGenL_stack_2->SetBinError(2,348.0893);
   GenJet_all_nGenL_stack_2->SetBinError(3,660.9671);
   GenJet_all_nGenL_stack_2->SetBinError(4,759.6729);
   GenJet_all_nGenL_stack_2->SetBinError(5,642.8694);
   GenJet_all_nGenL_stack_2->SetBinError(6,446.5179);
   GenJet_all_nGenL_stack_2->SetBinError(7,275.0727);
   GenJet_all_nGenL_stack_2->SetBinError(8,157.0133);
   GenJet_all_nGenL_stack_2->SetBinError(9,85.12082);
   GenJet_all_nGenL_stack_2->SetBinError(10,44.5522);
   GenJet_all_nGenL_stack_2->SetBinError(11,22.73331);
   GenJet_all_nGenL_stack_2->SetBinError(12,11.39879);
   GenJet_all_nGenL_stack_2->SetBinError(13,5.625862);
   GenJet_all_nGenL_stack_2->SetBinError(14,2.75048);
   GenJet_all_nGenL_stack_2->SetBinError(15,1.360091);
   GenJet_all_nGenL_stack_2->SetBinError(16,0.5623379);
   GenJet_all_nGenL_stack_2->SetBinError(17,0.3195507);
   GenJet_all_nGenL_stack_2->SetBinError(18,0.103425);
   GenJet_all_nGenL_stack_2->SetBinError(19,0.07496895);
   GenJet_all_nGenL_stack_2->SetEntries(5.166267e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenL_stack_2->SetFillColor(ci);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenL_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_all_nGenL_stack_1","QCD","F");

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
   GenJet_all_nGenL_bckg_16->Modified();
   GenJet_all_nGenL_bckg_16->cd();
   GenJet_all_nGenL_bckg_16->SetSelected(GenJet_all_nGenL_bckg_16);
}
