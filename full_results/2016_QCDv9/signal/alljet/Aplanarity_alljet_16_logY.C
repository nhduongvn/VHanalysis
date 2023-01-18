#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_16_logY()
{
//=========Macro generated from canvas: Aplanarity_alljet_16/Aplanarity_alljet_16
//=========  (Wed Jan 18 11:42:16 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_16 = new TCanvas("Aplanarity_alljet_16", "Aplanarity_alljet_16",0,0,600,600);
   Aplanarity_alljet_16->SetHighLightColor(2);
   Aplanarity_alljet_16->Range(-0.2183529,-0.1022534,1.171633,5.366611);
   Aplanarity_alljet_16->SetFillColor(0);
   Aplanarity_alljet_16->SetFillStyle(4000);
   Aplanarity_alljet_16->SetBorderMode(0);
   Aplanarity_alljet_16->SetBorderSize(2);
   Aplanarity_alljet_16->SetLogy();
   Aplanarity_alljet_16->SetLeftMargin(0.15709);
   Aplanarity_alljet_16->SetRightMargin(0.1234783);
   Aplanarity_alljet_16->SetBottomMargin(0.12);
   Aplanarity_alljet_16->SetFrameFillStyle(1000);
   Aplanarity_alljet_16->SetFrameBorderMode(0);
   Aplanarity_alljet_16->SetFrameFillStyle(1000);
   Aplanarity_alljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(38455.28);
   
   TH1F *st_stack_253 = new TH1F("st_stack_253","",50,0,1);
   st_stack_253->SetMinimum(3.581049);
   st_stack_253->SetMaximum(66027.38);
   st_stack_253->SetDirectory(0);
   st_stack_253->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_253->SetLineColor(ci);
   st_stack_253->GetXaxis()->SetTitle("Aplanarity");
   st_stack_253->GetXaxis()->SetRange(1,50);
   st_stack_253->GetXaxis()->SetLabelFont(42);
   st_stack_253->GetXaxis()->SetTitleOffset(1);
   st_stack_253->GetXaxis()->SetTitleFont(42);
   st_stack_253->GetYaxis()->SetTitle("Events/0.02");
   st_stack_253->GetYaxis()->SetLabelFont(42);
   st_stack_253->GetYaxis()->SetTitleSize(0.037);
   st_stack_253->GetYaxis()->SetTitleFont(42);
   st_stack_253->GetZaxis()->SetLabelFont(42);
   st_stack_253->GetZaxis()->SetTitleOffset(1);
   st_stack_253->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_253);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(1,340.8062);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(2,95.56201);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(3,52.09783);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(4,33.5575);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(5,22.42791);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(6,15.85425);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(7,11.22337);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(8,8.073946);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(9,5.807343);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(10,4.385331);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(11,2.997782);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(12,2.20666);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(13,1.586393);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(14,1.068332);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(15,0.7047061);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(16,0.4076691);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(17,0.2458237);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(18,0.1491008);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(19,0.09545629);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(20,0.04432823);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(21,0.01882212);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(22,0.009612008);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(1,0.7425791);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(2,0.3903803);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(3,0.2885859);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(4,0.231178);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(5,0.1892364);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(6,0.159037);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(7,0.1338514);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(8,0.113264);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(9,0.09621102);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(10,0.08363007);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(11,0.06913219);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(12,0.05896276);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(13,0.05002369);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(14,0.04134186);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(15,0.03373217);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(16,0.02535023);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(17,0.01983772);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(18,0.01550212);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(19,0.0127723);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(20,0.008874064);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(21,0.005436041);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(22,0.003929252);
   VbbHcc_alljet_Aplanarity_stack_1->SetEntries(451639);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(1,43.74661);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(2,16.32622);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(3,9.088238);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(4,5.699491);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(5,3.660615);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(6,2.461283);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(7,1.641399);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(8,1.133919);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(9,0.7642773);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(10,0.5052248);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(11,0.3397121);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(12,0.2427725);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(13,0.16161);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(14,0.09785223);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(15,0.07079292);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(16,0.03738463);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(17,0.02078506);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(18,0.01420828);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(19,0.008913716);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(20,0.00532333);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(21,0.001215725);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(22,0.0006356296);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(1,0.09053737);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(2,0.0557991);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(3,0.04174519);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(4,0.03310573);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(5,0.02654219);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(6,0.02177835);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(7,0.01776472);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(8,0.01478149);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(9,0.01213384);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(10,0.009847746);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(11,0.00808334);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(12,0.006835838);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(13,0.00556597);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(14,0.004351181);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(15,0.003699938);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(16,0.002701634);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(17,0.002002136);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(18,0.001662012);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(19,0.001312015);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(20,0.001025891);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(21,0.0004969509);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(22,0.0003517757);
   VbbHcc_alljet_Aplanarity_stack_2->SetEntries(488414);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_alljet_16->Modified();
   Aplanarity_alljet_16->cd();
   Aplanarity_alljet_16->SetSelected(Aplanarity_alljet_16);
}
