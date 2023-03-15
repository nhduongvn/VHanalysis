#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Fri Mar 10 11:26:57 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2183529,-0.2149602,1.171633,1.576374);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetFillStyle(4000);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15709);
   Sphericity_algo_16->SetRightMargin(0.1234783);
   Sphericity_algo_16->SetBottomMargin(0.12);
   Sphericity_algo_16->SetFrameFillStyle(1000);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameFillStyle(1000);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.397241);
   
   TH1F *st_stack_121 = new TH1F("st_stack_121","",25,0,1);
   st_stack_121->SetMinimum(0);
   st_stack_121->SetMaximum(1.397241);
   st_stack_121->SetDirectory(0);
   st_stack_121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_121->SetLineColor(ci);
   st_stack_121->GetXaxis()->SetTitle("Sphericity");
   st_stack_121->GetXaxis()->SetRange(1,25);
   st_stack_121->GetXaxis()->SetLabelFont(42);
   st_stack_121->GetXaxis()->SetTitleOffset(1);
   st_stack_121->GetXaxis()->SetTitleFont(42);
   st_stack_121->GetYaxis()->SetTitle("Event/0.04");
   st_stack_121->GetYaxis()->SetLabelFont(42);
   st_stack_121->GetYaxis()->SetTitleSize(0.037);
   st_stack_121->GetYaxis()->SetTitleFont(42);
   st_stack_121->GetZaxis()->SetLabelFont(42);
   st_stack_121->GetZaxis()->SetTitleOffset(1);
   st_stack_121->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_121);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,0.04337099);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,0.4082744);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,0.8552142);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,0.8383041);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,0.8639216);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,0.8110318);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,0.8087768);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,0.6510795);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,0.5813435);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,0.5609034);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,0.5170185);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,0.3971842);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,0.3916771);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,0.3548289);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,0.2941458);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,0.281672);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,0.1711948);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,0.1344682);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,0.1185764);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,0.04537245);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(21,0.01475156);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(22,0.01062555);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,0.01094214);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,0.03404331);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,0.05030415);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,0.05021804);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,0.05133519);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,0.05049524);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,0.04966636);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,0.04524064);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,0.04246536);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,0.04070508);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,0.03930197);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,0.03475154);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,0.03467593);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,0.03306092);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,0.03033171);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,0.02899586);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,0.02330239);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,0.02004138);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,0.01882645);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,0.01146004);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(21,0.006608374);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(22,0.005526138);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(3307);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,0.03980175);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,0.1551417);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,0.2551314);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,0.3030153);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,0.2957885);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,0.2907209);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,0.2820596);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,0.2801242);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,0.2437387);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,0.2178885);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,0.2022512);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,0.1996788);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,0.1589902);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,0.1347032);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.1112274);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,0.09448505);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,0.07055242);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.05524472);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.02620381);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.01436927);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.003129191);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(22,0.001177068);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,0.003792981);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,0.007578771);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,0.00978483);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,0.0107197);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,0.01062757);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,0.01052577);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,0.01037877);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,0.01036537);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.009683048);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,0.009171524);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.008834713);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.008759763);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.00780213);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.007190441);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.006536337);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.006029059);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.005214042);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.004572391);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.003201237);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.002375498);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.001107377);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(22,0.0006812773);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(9173);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
