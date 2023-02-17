#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_all()
{
//=========Macro generated from canvas: Aplanarity_algo_all/Aplanarity_algo_all
//=========  (Tue Feb 14 15:57:10 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_all = new TCanvas("Aplanarity_algo_all", "Aplanarity_algo_all",0,0,600,600);
   Aplanarity_algo_all->SetHighLightColor(2);
   Aplanarity_algo_all->Range(-0.2183529,-0.8674783,1.171633,6.361508);
   Aplanarity_algo_all->SetFillColor(0);
   Aplanarity_algo_all->SetFillStyle(4000);
   Aplanarity_algo_all->SetBorderMode(0);
   Aplanarity_algo_all->SetBorderSize(2);
   Aplanarity_algo_all->SetLeftMargin(0.15709);
   Aplanarity_algo_all->SetRightMargin(0.1234783);
   Aplanarity_algo_all->SetBottomMargin(0.12);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.638609);
   
   TH1F *st_stack_128 = new TH1F("st_stack_128","",50,0,1);
   st_stack_128->SetMinimum(0);
   st_stack_128->SetMaximum(5.638609);
   st_stack_128->SetDirectory(0);
   st_stack_128->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_128->SetLineColor(ci);
   st_stack_128->GetXaxis()->SetTitle("Aplanarity");
   st_stack_128->GetXaxis()->SetRange(1,50);
   st_stack_128->GetXaxis()->SetLabelFont(42);
   st_stack_128->GetXaxis()->SetTitleOffset(1);
   st_stack_128->GetXaxis()->SetTitleFont(42);
   st_stack_128->GetYaxis()->SetTitle("Events/0.02");
   st_stack_128->GetYaxis()->SetLabelFont(42);
   st_stack_128->GetYaxis()->SetTitleSize(0.037);
   st_stack_128->GetYaxis()->SetTitleFont(42);
   st_stack_128->GetZaxis()->SetLabelFont(42);
   st_stack_128->GetZaxis()->SetTitleOffset(1);
   st_stack_128->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_128);
   
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(1,2.941884);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(2,2.347435);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(3,1.726846);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(4,1.118874);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(5,0.8119612);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(6,0.5531197);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(7,0.4532076);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(8,0.3627798);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(9,0.2096041);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(10,0.179218);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(11,0.132355);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(12,0.09049759);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(13,0.07192794);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(14,0.06050027);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(15,0.02327293);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(16,0.01929081);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(17,0.0132536);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(18,0.006165558);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(19,0.00436075);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(20,0.002452157);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(21,0.002871662);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(1,0.0958797);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(2,0.07789566);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(3,0.06649059);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(4,0.05344245);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(5,0.0449452);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(6,0.03817885);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(7,0.03497979);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(8,0.03022612);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(9,0.02286424);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(10,0.02095404);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(11,0.01805572);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(12,0.01524711);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(13,0.01342135);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(14,0.01251123);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(15,0.007300235);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(16,0.006997148);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(17,0.005479619);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(18,0.003646284);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(19,0.003093751);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(20,0.002452157);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(21,0.002871662);
   VbbHcc_algo_Aplanarity_all_stack_1->SetEntries(5082);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(1,0.817189);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(2,0.6848395);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(3,0.4968967);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(4,0.3372842);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(5,0.2255755);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(6,0.1681261);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(7,0.1179265);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(8,0.07901918);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(9,0.05056273);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(10,0.03712216);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(11,0.02690456);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(12,0.01623106);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(13,0.01355673);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(14,0.004508728);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(15,0.004164552);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(16,0.001102781);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(17,0.001433349);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(18,0.0005642576);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(19,0.000318965);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(1,0.01641333);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(2,0.01482381);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(3,0.01305513);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(4,0.01043591);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(5,0.008531397);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(6,0.007341852);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(7,0.006161587);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(8,0.005133566);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(9,0.004112091);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(10,0.003913114);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(11,0.002918248);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(12,0.003412795);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(13,0.002073866);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(14,0.001147115);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(15,0.001176639);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(16,0.0005571476);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(17,0.0007372224);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(18,0.0004073186);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(19,0.0002256193);
   VbbHcc_algo_Aplanarity_all_stack_2->SetEntries(10346);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_all->Modified();
   Aplanarity_algo_all->cd();
   Aplanarity_algo_all->SetSelected(Aplanarity_algo_all);
}
