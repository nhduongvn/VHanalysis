#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_18()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_18/Aplanarity_tagOnly_18
//=========  (Fri Oct 20 11:03:28 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tagOnly_18 = new TCanvas("Aplanarity_tagOnly_18", "Aplanarity_tagOnly_18",0,0,600,600);
   Aplanarity_tagOnly_18->SetHighLightColor(2);
   Aplanarity_tagOnly_18->Range(0,0,1,1);
   Aplanarity_tagOnly_18->SetFillColor(0);
   Aplanarity_tagOnly_18->SetFillStyle(4000);
   Aplanarity_tagOnly_18->SetBorderMode(0);
   Aplanarity_tagOnly_18->SetBorderSize(2);
   Aplanarity_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-6168.298,1.052419,6162139);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(5545308);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",50,0,1);
   st_stack_48->SetMinimum(0.01);
   st_stack_48->SetMaximum(5545308);
   st_stack_48->SetDirectory(nullptr);
   st_stack_48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_48->SetLineColor(ci);
   st_stack_48->SetLineWidth(0);
   st_stack_48->GetXaxis()->SetRange(1,50);
   st_stack_48->GetXaxis()->SetLabelFont(42);
   st_stack_48->GetXaxis()->SetTitleOffset(1);
   st_stack_48->GetXaxis()->SetTitleFont(42);
   st_stack_48->GetYaxis()->SetTitle("Events/0.02");
   st_stack_48->GetYaxis()->SetLabelFont(42);
   st_stack_48->GetYaxis()->SetLabelSize(0.05);
   st_stack_48->GetYaxis()->SetTitleSize(0.057);
   st_stack_48->GetYaxis()->SetTitleOffset(1.2);
   st_stack_48->GetYaxis()->SetTitleFont(42);
   st_stack_48->GetZaxis()->SetLabelFont(42);
   st_stack_48->GetZaxis()->SetTitleOffset(1);
   st_stack_48->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_48);
   
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_1 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(1,2007998);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(2,245921.8);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(3,60144.97);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(4,18792.09);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(5,8100.209);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(6,3586.871);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(7,1104.599);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(8,4753.789);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(9,906.6727);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(10,314.1778);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(11,107.3527);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(12,54.03805);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(13,749.1204);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(14,17.82825);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(15,38.58682);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(16,0.7094865);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(17,21.73368);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(1,38971.58);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(2,10792.57);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(3,5432.026);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(4,2381.781);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(5,2073.69);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(6,916.9206);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(7,192.3863);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(8,3142.353);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(9,437.5877);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(10,115.579);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(11,31.03104);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(12,21.62353);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(13,693.9399);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(14,13.65797);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(15,17.06205);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(16,0.7094865);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(17,15.05363);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetEntries(160135);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tagOnly_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_2 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(1,23703.64);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(2,3186.662);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(3,823.3358);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(4,310.2388);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(5,123.3625);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(6,55.29554);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(7,37.62282);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(8,22.6871);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(9,10.52153);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(10,4.102888);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(11,2.423006);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(12,2.923549);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(13,1.716811);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(14,0.6047595);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(15,0.4670292);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(16,0.4280347);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(17,0.5694133);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(18,0.1290069);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(1,102.3491);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(2,36.49515);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(3,19.40371);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(4,10.98571);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(5,7.603458);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(6,4.57705);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(7,7.180231);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(8,3.571506);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(9,1.9662);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(10,0.8957251);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(11,0.747175);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(12,1.112684);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(13,0.5554227);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(14,0.3035478);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(15,0.3209969);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(16,0.301662);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(17,0.3311209);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(18,0.08382063);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetEntries(225451);

   ci = TColor::GetColor("#660066");
   VbbHcc_tagOnly_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_3 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(1,435557.9);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(2,58459.88);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(3,15222.47);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(4,5462.367);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(5,2532.741);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(6,1262.227);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(7,719.2101);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(8,411.9499);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(9,241.5946);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(10,166.9085);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(11,104.2131);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(12,68.62835);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(13,38.88263);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(14,26.37866);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(15,15.87076);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(16,8.405286);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(17,7.254822);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(18,2.545592);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(19,1.804367);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(20,0.1870654);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(21,0.8092477);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(22,0.06632132);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(1,257.613);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(2,93.79487);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(3,49.01442);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(4,28.38402);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(5,21.21661);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(6,13.56004);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(7,10.44491);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(8,7.556204);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(9,5.862719);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(10,5.00276);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(11,3.795408);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(12,3.176217);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(13,2.229751);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(14,3.165083);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(15,1.548113);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(16,1.122939);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(17,2.002476);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(18,0.4954265);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(19,0.4313534);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(20,0.1084097);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(21,0.4161368);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(22,0.06632132);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetEntries(5700497);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tagOnly_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_4 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(1,17804.23);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(2,1955.055);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(3,466.5985);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(4,157.117);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(5,74.11319);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(6,34.11904);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(7,26.25319);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(8,10.98712);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(9,8.460049);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(10,5.814195);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(11,2.873054);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(12,2.112966);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(13,0.5708316);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(14,0.5624234);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(15,0.3470405);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(16,0.08854268);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(17,0.01785026);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(18,1.214417);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(19,0.1096206);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(1,125.2136);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(2,47.25669);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(3,17.9515);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(4,8.735472);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(5,6.443258);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(6,4.029673);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(7,11.51963);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(8,2.002762);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(9,1.916193);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(10,3.279879);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(11,1.043665);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(12,1.258183);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(13,0.2945314);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(14,0.3685569);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(15,0.2606317);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(16,0.08854268);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(17,0.01785026);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(18,1.086877);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(19,0.1096206);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetEntries(86396);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tagOnly_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_5 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(1,9689.726);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(2,997.7308);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(3,295.7468);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(4,104.5695);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(5,43.94625);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(6,35.38338);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(7,11.70312);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(8,11.12885);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(9,1.104293);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(10,1.610274);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(11,0.5392415);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(12,2.277022);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(14,0.1334477);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(16,0.3585391);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(17,0.1315572);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(18,1.920296);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(1,170.7904);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(2,53.1181);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(3,29.20527);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(4,20.21688);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(5,10.40756);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(6,12.79382);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(7,3.292071);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(8,5.15413);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(9,0.4964965);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(10,0.616865);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(11,0.3218923);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(12,1.63422);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(14,0.1153499);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(16,0.3585391);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(17,0.1315572);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(18,1.920296);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetEntries(39018);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tagOnly_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_6 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(1,78.15881);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(2,7.417412);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(3,2.315321);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(5,2.389306);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(7,0.4451917);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(1,7.879682);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(2,2.188249);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(3,1.416815);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(5,1.76483);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(7,0.4451917);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetEntries(144);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tagOnly_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_7 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(1,230.3259);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(2,26.14285);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(3,5.947406);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(4,7.742504);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(1,12.37091);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(2,5.066969);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(3,1.88686);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(4,3.289712);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetEntries(512);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tagOnly_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_8 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(1,174.8063);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(2,14.1105);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(3,2.724981);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(4,0.2447533);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(1,9.20988);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(2,2.570655);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(3,1.057133);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(4,0.2447533);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetEntries(509);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tagOnly_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_9 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(1,91.86375);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(2,8.237158);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(3,1.955931);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(4,0.5678242);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(5,0.2920292);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(6,0.124747);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(7,0.05429429);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(8,0.06506609);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(9,0.01194184);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(10,0.0275576);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(11,0.02807197);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(14,0.005445564);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(16,0.004795008);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(18,0.002157458);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(1,0.7072094);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(2,0.1943323);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(3,0.09800117);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(4,0.05201448);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(5,0.03518295);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(6,0.02262612);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(7,0.01289545);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(8,0.0196295);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(9,0.005435149);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(10,0.00922289);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(11,0.01312078);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(14,0.003926646);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(16,0.003392548);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(18,0.002157458);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetEntries(32696);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tagOnly_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_10 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(1,56.34199);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(2,6.31586);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(3,1.501083);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(4,0.5101901);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(5,0.2529732);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(6,0.1013597);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(7,0.07639394);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(8,0.03411125);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(9,0.02051565);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(10,0.01456764);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(11,0.007715465);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(12,0.005374274);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(13,0.00277619);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(14,0.002751503);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(16,0.0008127683);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(17,0.0005512707);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(19,0.0007208128);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(21,0.0006203348);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(1,0.1759563);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(2,0.05818115);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(3,0.02840946);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(4,0.01683589);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(5,0.01195638);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(6,0.007387131);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(7,0.006559424);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(8,0.004364776);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(9,0.003367019);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(10,0.002733931);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(11,0.002246392);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(12,0.001692987);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(13,0.001256352);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(14,0.001237463);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(16,0.0005918296);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(17,0.0005512707);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(19,0.0007208128);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(21,0.0006203348);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tagOnly_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_11 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(1,2.176447);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(2,0.1780332);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(3,0.04580702);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(4,0.007595915);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(5,0.004278007);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(6,0.001589558);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(7,0.005270298);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(8,0.004754182);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(1,0.09182893);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(2,0.02327358);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(3,0.01448472);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(4,0.005393854);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(5,0.003026337);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(6,0.001589558);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(7,0.003737235);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(8,0.004754182);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetEntries(903);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tagOnly_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_12 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(1,1.055671);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(2,0.1100843);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(3,0.02510045);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(4,0.006638467);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(5,0.001997481);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(6,0.0008682653);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(8,0.001435993);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(9,0.0009341594);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(10,0.0006904335);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(12,0.0005949514);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(14,0.000799897);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(1,0.02177852);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(2,0.00682408);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(3,0.003371852);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(4,0.001605629);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(5,0.0008287841);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(6,0.0006148951);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(8,0.0006498344);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(9,0.0005409139);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(10,0.0006904335);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(12,0.0004207137);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(14,0.0006094936);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetEntries(3336);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tagOnly_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tagOnly_Aplanarity__95 = new TH1D("VbbHcc_tagOnly_Aplanarity__95","",50,0,1);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(0,2);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(1,2444701);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(2,318683);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(3,82559);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(4,27754);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(5,11487);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(6,5683);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(7,3005);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(8,1735);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(9,1045);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(10,688);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(11,421);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(12,280);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(13,193);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(14,79);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(15,64);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(16,41);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(17,32);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(18,12);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(19,9);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(20,1);
   VbbHcc_tagOnly_Aplanarity__95->SetBinContent(21,1);
   VbbHcc_tagOnly_Aplanarity__95->SetEntries(2898524);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity__95->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity__95->SetLineWidth(2);
   VbbHcc_tagOnly_Aplanarity__95->SetMarkerStyle(20);
   VbbHcc_tagOnly_Aplanarity__95->SetMarkerSize(1.2);
   VbbHcc_tagOnly_Aplanarity__95->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity__95->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity__95->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity__95->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity__95->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity__95->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity__95->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity__95->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity__95->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity__95->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagOnly_Aplanarity_fx1095[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_tagOnly_Aplanarity_fy1095[50] = { 2495389, 310583.7, 76967.64, 24835.46, 10877.31, 4974.124, 1899.969, 5210.647, 1168.387, 492.6565, 217.4369, 129.9859, 790.2935, 45.51654, 55.27166, 9.995496, 29.70788,
   5.811469, 1.914708, 0.1870654, 0.8098681, 0.06632132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_tagOnly_Aplanarity_fex1095[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_tagOnly_Aplanarity_fey1095[50] = { 38973.15, 10793.28, 5432.391, 2382.08, 2073.849, 917.1303, 193.1757, 3142.369, 437.6359, 115.7388, 31.29028, 21.98084, 693.9437, 14.02851, 17.13712, 1.411299, 15.19043,
   2.263033, 0.4450651, 0.1084097, 0.4161373, 0.06632132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tagOnly_Aplanarity_fx1095,Graph_from_VbbHcc_tagOnly_Aplanarity_fy1095,Graph_from_VbbHcc_tagOnly_Aplanarity_fex1095,Graph_from_VbbHcc_tagOnly_Aplanarity_fey1095);
   gre->SetName("Graph_from_VbbHcc_tagOnly_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1095 = new TH1F("Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1095","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1095->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1095->SetMaximum(2787798);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1095->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1095->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1095->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1095->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1095->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1095->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1095->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1095->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1095);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","ZZ","F");

   ci = TColor::GetColor("#33ff99");
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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","WZ","F");

   ci = TColor::GetColor("#3399ff");
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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","WW","F");

   ci = TColor::GetColor("#9933ff");
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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","Single top","F");

   ci = TColor::GetColor("#660066");
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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   entry=leg->AddEntry("Graph_from_VbbHcc_tagOnly_Aplanarity","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

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
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tagOnly_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__96 = new TH1D("data_mc_ratio__96","",50,0,1);
   data_mc_ratio__96->SetBinContent(1,0.9796875);
   data_mc_ratio__96->SetBinContent(2,1.026078);
   data_mc_ratio__96->SetBinContent(3,1.072646);
   data_mc_ratio__96->SetBinContent(4,1.117515);
   data_mc_ratio__96->SetBinContent(5,1.056051);
   data_mc_ratio__96->SetBinContent(6,1.142513);
   data_mc_ratio__96->SetBinContent(7,1.581604);
   data_mc_ratio__96->SetBinContent(8,0.3329721);
   data_mc_ratio__96->SetBinContent(9,0.8943957);
   data_mc_ratio__96->SetBinContent(10,1.396511);
   data_mc_ratio__96->SetBinContent(11,1.936194);
   data_mc_ratio__96->SetBinContent(12,2.15408);
   data_mc_ratio__96->SetBinContent(13,0.2442131);
   data_mc_ratio__96->SetBinContent(14,1.735633);
   data_mc_ratio__96->SetBinContent(15,1.157917);
   data_mc_ratio__96->SetBinContent(16,4.101847);
   data_mc_ratio__96->SetBinContent(17,1.077155);
   data_mc_ratio__96->SetBinContent(18,2.064882);
   data_mc_ratio__96->SetBinContent(19,4.700455);
   data_mc_ratio__96->SetBinContent(20,5.345724);
   data_mc_ratio__96->SetBinContent(21,1.234769);
   data_mc_ratio__96->SetBinError(1,0.0006265773);
   data_mc_ratio__96->SetBinError(2,0.001817611);
   data_mc_ratio__96->SetBinError(3,0.003733138);
   data_mc_ratio__96->SetBinError(4,0.006707962);
   data_mc_ratio__96->SetBinError(5,0.0098533);
   data_mc_ratio__96->SetBinError(6,0.01515557);
   data_mc_ratio__96->SetBinError(7,0.02885198);
   data_mc_ratio__96->SetBinError(8,0.007993888);
   data_mc_ratio__96->SetBinError(9,0.02766761);
   data_mc_ratio__96->SetBinError(10,0.05324147);
   data_mc_ratio__96->SetBinError(11,0.09436433);
   data_mc_ratio__96->SetBinError(12,0.1287309);
   data_mc_ratio__96->SetBinError(13,0.01757884);
   data_mc_ratio__96->SetBinError(14,0.195274);
   data_mc_ratio__96->SetBinError(15,0.1447396);
   data_mc_ratio__96->SetBinError(16,0.6406009);
   data_mc_ratio__96->SetBinError(17,0.190416);
   data_mc_ratio__96->SetBinError(18,0.5960802);
   data_mc_ratio__96->SetBinError(19,1.566818);
   data_mc_ratio__96->SetBinError(20,5.345724);
   data_mc_ratio__96->SetBinError(21,1.234769);
   data_mc_ratio__96->SetMinimum(0.4);
   data_mc_ratio__96->SetMaximum(1.6);
   data_mc_ratio__96->SetEntries(28.12464);
   data_mc_ratio__96->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__96->SetLineColor(ci);
   data_mc_ratio__96->SetLineWidth(2);
   data_mc_ratio__96->SetMarkerStyle(20);
   data_mc_ratio__96->SetMarkerSize(1.2);
   data_mc_ratio__96->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__96->GetXaxis()->SetRange(1,50);
   data_mc_ratio__96->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__96->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__96->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__96->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__96->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__96->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__96->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__96->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__96->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__96->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__96->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__96->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__96->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1096[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1096[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1096[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1096[50] = { 0.01561807, 0.0347516, 0.07058019, 0.09591446, 0.1906582, 0.1843803, 0.1016731, 0.603067, 0.3745643, 0.234928, 0.1439051, 0.1691017, 0.8780836, 0.308207, 0.3100527, 0.1411935, 0.5113265,
   0.389408, 0.2324454, 0.5795284, 0.5138334, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1096,Graph_from_mc_statistical_error_fy1096,Graph_from_mc_statistical_error_fex1096,Graph_from_mc_statistical_error_fey1096);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1096 = new TH1F("Graph_Graph_from_mc_statistical_error1096","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1096->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1096->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1096->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1096->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1096->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1096);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagOnly_18->cd();
   Aplanarity_tagOnly_18->Modified();
   Aplanarity_tagOnly_18->cd();
   Aplanarity_tagOnly_18->SetSelected(Aplanarity_tagOnly_18);
}
